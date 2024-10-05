#include "buygoodsdialog.hpp"
#include "ui_buygoodsdialog.h"
#include <QInputDialog>
#include <QDesktopServices>
#include <QUrl>
#include <QFileInfo>



extern int extern_id;
extern QString extern_username;
extern QString extern_address;
extern QString extern_phone;

buyGoodsDialog::buyGoodsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buyGoodsDialog)
{
    createDB();
    createTable();
    ui->setupUi(this);
    QSqlQuery query;
    QString str;
    qDebug() << "购买的id为:" << extern_id;

    str = QString::number(extern_id);
    ui->idLineEdit->setText(str);
    str = QString("SELECT 名称 FROM goods WHERE 编号=%1").arg(extern_id);
    query.exec(str);query.next();
    ui->nameLineEdit->setText(query.value(0).toString());
    str = QString("SELECT 价格 FROM goods WHERE 编号=%1").arg(extern_id);
    query.exec(str);query.next();
    ui->priceLineEdit->setText(query.value(0).toString());
    str = QString("SELECT 数量 FROM goods WHERE 编号=%1").arg(extern_id);
    query.exec(str);query.next();
    ui->numberLineEdit->setText(query.value(0).toString());
    str = QString("SELECT 备注 FROM goods WHERE 编号=%1").arg(extern_id);
    query.exec(str);query.next();
    ui->noticeLineEdit->setText(query.value(0).toString());
    ui->addressLineEdit->setText(extern_address);
    ui->phoneLineEdit->setText(extern_phone);
}

buyGoodsDialog::~buyGoodsDialog()
{
    delete ui;
}

void buyGoodsDialog::createDB(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");
    if(db.open()){
        qDebug() << "数据库打开成功";
    }
    else{
        qDebug() << db.lastError().text();
    }
}

// 创建订单数据表
// id 序号(自动递进), good_id 商品编号, username 用户名,
// good_name 商品名称, good_price 商品价格, good_number 商品数量, user_notice 购买者备注
void buyGoodsDialog::createTable(){
    QSqlQuery query;
    QString str = QString("CREATE TABLE orders("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                          "good_id INT NOT NULL,"
                          "username TEXT NOT NULL,"
                          "good_name TEXT NOT NULL,"
                          "good_price DOUBLE NOT NULL,"
                          "good_number INT NOT NULL,"
                          "user_notice TEXT);");
    if(query.exec(str)){
        qDebug() << "创建order数据表成功";
    }
    else{
        qDebug() << str;
    }
}

// 取消
void buyGoodsDialog::on_pushButton_2_clicked()
{
    this->close();
}

// 购买
void buyGoodsDialog::on_pushButton_clicked()
{
    QString imagePath = "images/pay.jpg"; // 确保路径正确

    // 使用QDesktopServices打开图片
    QUrl imageUrl = QUrl::fromLocalFile(QFileInfo(imagePath).absoluteFilePath());

    if (QDesktopServices::openUrl(imageUrl)) {
        qDebug() << "图片已成功打开。";

        // 完成支付按钮
        QMessageBox payMsgBox;
        payMsgBox.setWindowTitle("支付");
        payMsgBox.setText("请完成支付，然后返回进行评分。");
        payMsgBox.setStandardButtons(QMessageBox::Ok);

        // 连接信号与槽
        connect(payMsgBox.button(QMessageBox::Ok), &QPushButton::clicked, [this](){
            // 显示打分框
            bool ok;
            int rating = QInputDialog::getInt(this, tr("打分"),
                                              tr("请输入对本次交易的评分（1-5）："), 3, 1, 5, 1, &ok);
            if (ok) {
                qDebug() << "用户评分：" << rating;
                createOrder(rating); // 调用创建订单的函数，同时传入评分
            }
        });

        payMsgBox.exec();
    } else {
        QMessageBox::warning(this, "错误", "无法打开支付图片，请检查文件路径。");
    }
}


void buyGoodsDialog::createOrder(int rating) {
    QSqlQuery query;
    QString good_name, user_notice;
    int good_number;
    double good_price;

    // 使用单个查询获取所有信息，避免多次访问数据库
    QString str = QString("SELECT 名称, 价格, 数量 FROM goods WHERE 编号=%1").arg(extern_id);

    if(query.exec(str) && query.next()) {
        good_name = query.value(0).toString();
        good_price = query.value(1).toDouble();
        good_number = query.value(2).toInt();
    } else {
        qDebug() << "获取商品信息失败";
        QMessageBox::warning(this, "错误", "获取商品信息失败，请重试。");
        return;
    }

    user_notice = ui->buyLineEdit->text(); // 备注信息
    qDebug() << "user_notice is :" << user_notice;

    // 插入订单数据
    str = QString("INSERT INTO orders(good_id, username, good_name, good_price, good_number, user_notice) "
                  "VALUES(%1, '%2', '%3', %4, %5, '%6');")
              .arg(extern_id).arg(extern_username).arg(good_name)
              .arg(good_price).arg(good_number).arg(user_notice);

    if(query.exec(str)){
        qDebug() << "订单创建成功";
        QMessageBox msg;
        msg.setText("订单创建成功！谢谢您的购买。");
        msg.exec();
        this->close(); // 关闭对话框
    }
    else{
        qDebug() << "订单创建失败：" << str;
        QMessageBox::warning(this, "错误", "订单创建失败，请重试。");
    }
}

// 可以考虑将此函数合并到 createOrder 中，或保持独立以便于其他地方调用
void buyGoodsDialog::on_buyButton_clicked()
{
    on_pushButton_clicked(); // 重用已实现的功能
}
