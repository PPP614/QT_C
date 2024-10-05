#include "releasegoodsdialog.hpp"
#include "ui_releasegoodsdialog.h"
#include "menuwidget.hpp"
#include "mainwindow.h"

#include <QFileDialog>
#include <QPixmap>
#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QDebug>

QString image_path;
QString extern_from;
extern QString extern_commodity;

ReleaseGoodsDialog::ReleaseGoodsDialog(const QString &from, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReleaseGoodsDialog)
{
    extern_from = from;
    ui->setupUi(this);

    // 设置输入验证器
    ui->idEdit->setValidator(new QIntValidator(this));
    ui->priceEdit->setValidator(new QDoubleValidator(0.0, 99999.99, 2, this)); // 价格为浮点数
    ui->releaseButton->setFocus();

    // 连接选择图片按钮的点击事件
    connect(ui->chooseImageButton, &QPushButton::clicked, this, &ReleaseGoodsDialog::on_chooseImageButton_clicked);

    createDB();
}

ReleaseGoodsDialog::~ReleaseGoodsDialog()
{
    db.close(); // 关闭数据库连接
    delete ui;
}

void ReleaseGoodsDialog::createDB() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");
    if (db.open()) {
        qDebug() << "数据库打开成功!";
    } else {
        qDebug() << db.lastError().text();
    }
}

// 处理选择图片按钮的点击事件
void ReleaseGoodsDialog::on_chooseImageButton_clicked() {
    QString fileName = QFileDialog::getOpenFileName(this, tr("选择图片"),
                                                    "", tr("Images (*.png *.jpg *.jpeg *.bmp *.gif)"));
    if (!fileName.isEmpty()) {
        QPixmap pixmap(fileName);
        ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size(), Qt::KeepAspectRatio)); // 自适应缩放
        selectedImagePath = fileName; // 保存图片路径
    }
}

void ReleaseGoodsDialog::on_releaseButton_clicked()
{
    int _id = ui->idEdit->text().toInt();
    QString _name = ui->nameEdit->text();
    double _price = ui->priceEdit->text().toDouble();
    int _number = ui->numberEdit->text().toInt();
    QString _notice = ui->noticeEdit->text();

    // 检查必填字段是否填写完整
    if (_name.isEmpty() || selectedImagePath.isEmpty()) {
        QMessageBox::warning(this, tr("警告"), tr("请填写所有必填字段！"));
        return;
    }

    QSqlQuery query;
    // 判断是否有这个商品编号了
    QString search = QString("SELECT 编号 FROM goods WHERE 编号='%1'").arg(_id);
    if (!query.exec(search)) {
        qDebug() << "查询失败: " << query.lastError().text();
        return;
    }
    query.next();

    // 找到了同名编号
    if (query.value(0).toString() == QString::number(_id)) {
        QMessageBox msg;
        msg.setText("编号已存在!");
        msg.exec();
    } else {
        // 将图片复制到指定目录
        QDir dir("images/");

        // 检查目录是否存在，如果不存在则创建
        if (!dir.exists()) {
            if (!dir.mkpath(".")) { // 创建目录
                qDebug() << "无法创建目录 images/";
                QMessageBox::warning(this, tr("错误"), tr("无法创建目录 images/!"));
                return;
            }
        }

        image_path = dir.filePath(QFileInfo(selectedImagePath).fileName()); // 使用全局变量
        if (QFile::copy(selectedImagePath, image_path)) {
            qDebug() << "图片已成功保存至:" << image_path;

            // 插入商品信息和图片路径到数据库
            QString str = QString("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                                  "VALUES(%1,'%2',%3,%4,'%5','%6')")
                              .arg(_id).arg(_name).arg(_price).arg(_number).arg(_notice).arg(image_path);

            if (query.exec(str)) {
                qDebug() << "商品发布成功!";
                QMessageBox msg;
                msg.setText("商品发布成功!");
                msg.exec();

                // 根据外部来源决定跳转到哪个窗口
                if (extern_from == "admin") {
                    MainWindow *mainwindow = new MainWindow(extern_commodity);
                    mainwindow->show();
                } else if (extern_from == "user") {
                    MenuWidget *menu = new MenuWidget;
                    menu->show();
                }
                this->close(); // 关闭当前对话框
            } else {
                qDebug() << "插入失败: " << str;
                qDebug() << "错误信息: " << query.lastError().text();
                QMessageBox::warning(this, tr("错误"), tr("插入商品信息失败!"));
            }
        } else {
            qDebug() << "图片保存失败!";
//            qDebug() << "错误信息: " << QFile::errorString(); // 获取具体错误信息
            QMessageBox::warning(this, tr("错误"), tr("图片保存失败!"));
        }
    }
}


void ReleaseGoodsDialog::on_cancelButton_clicked()
{
    if (extern_from == "admin") {
        MainWindow *mainwindow = new MainWindow(extern_commodity);
        mainwindow->show();
        this->close();
    } else if (extern_from == "user") {
        MenuWidget *menu = new MenuWidget;
        menu->show();
        this->close();
    }
}
