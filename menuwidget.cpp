#include "menuwidget.hpp"
#include "ui_menuwidget.h"
#include "releasegoodsdialog.hpp"
#include "myprofiledialog.hpp"
#include "buygoodsdialog.hpp"
#include "myordersdialog.hpp"
#include "logindialog.hpp"
#include "clientdialog.hpp"
#include "ui_clientdialog.h"

extern QString extern_username;
QString extern_phone;
QString extern_address;
int extern_id;

#include <QStyledItemDelegate>
#include <QPainter>
#include <QPixmap>
#include <QPushButton>
#include <QHBoxLayout>

class ImageDelegate : public QStyledItemDelegate {
public:
    using QStyledItemDelegate::QStyledItemDelegate;

    void paint(QPainter *painter, const QStyleOptionViewItem &option,
               const QModelIndex &index) const override {
        QString imagePath = index.data().toString();
        QPixmap pixmap(imagePath);

        if (!pixmap.isNull()) {
            QSize size(100, 100); // 固定大小
            pixmap = pixmap.scaled(size, Qt::KeepAspectRatio, Qt::SmoothTransformation);

            QRect targetRect = option.rect;
            QRect centeredRect = QRect(targetRect.x() + (targetRect.width() - size.width()) / 2,
                                       targetRect.y() + (targetRect.height() - size.height()) / 2,
                                       size.width(), size.height());
            painter->drawPixmap(centeredRect, pixmap);
        } else {
            painter->drawText(option.rect, Qt::AlignCenter, "Image not found");
        }
    }

    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override {
        return QSize(100, 100); // 固定单元格大小
    }
};

MenuWidget::MenuWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MenuWidget)
{
    ui->setupUi(this);
    ui->buyIdEdit->setValidator(new QIntValidator(this));

    initTable();
    createDB();
    createTable();
    queryTable();
    qDebug() << "外部用户名为：" << extern_username;
    ui->usernameLabel->setText(extern_username);
}

MenuWidget::~MenuWidget()
{
    delete ui;
}

// 初始化表格
void MenuWidget::initTable(){
    ui->table->setAlternatingRowColors(true);
}

// 创建数据库
void MenuWidget::createDB(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");
    if(db.open()){
        qDebug() << "数据库打开成功!";
    }
    else{
        qDebug() << db.lastError().text();
    }
    QString str;
    QSqlQuery query;
    str = QString("SELECT phone FROM users WHERE username='%1'").arg(extern_username);
    query.exec(str); query.next();
    extern_phone = query.value(0).toString(); //

    str = QString("SELECT address FROM users WHERE username='%1'").arg(extern_username);
    query.exec(str); query.next();
    extern_address = query.value(0).toString(); //
}

// 创建商品数据表
void MenuWidget::createTable(){
    QString str = QString("CREATE TABLE goods("
                          "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                          "编号 INT NOT NULL,"
                          "名称 TEXT NOT NULL,"
                          "价格 DOUBLE NOT NULL,"
                          "数量 INT NOT NULL,"
                          "备注 TEXT,"
                          "image_path TEXT);");  // 新增字段
    QSqlQuery query;
    if(query.exec(str)){
        qDebug() << "数据表创建成功";
        // 插入数据时也要提供图片路径
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(1,'C++程序设计基础',25.5,1,'全新', 'images/1.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(2,'自行车',299,2,'8成新，可小刀', 'images/2.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(3,'手电筒',19.9,12,'99新，用过一两次', 'images/3.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(4,'求助',35,1,'榕轩一楼厕所送纸', 'images/4.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(5,'求助',5,1,'中午帮忙带午饭', 'images/5.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(6,'电脑',1899,1,'7成新，修好卖给同学', 'images/6.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(7,'Java--从入门到入坟',29.5,1,'从入门到入坟....', 'images/7.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(8,'天堂牌雨伞',24,1,'5成新，伞骨架断了', 'images/8.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(9,'小狗',399,1,'小金毛，超可爱', 'images/9.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(10,'求助',5,1,'上课帮我答个道', 'images/10.jpg')");
        query.exec("INSERT INTO goods(编号,名称,价格,数量,备注,image_path) "
                   "VALUES(11,'没喝完的奶茶',9.9,1,'99新，只喝了一口', 'images/11.jpg')");
    }
    else{
        qDebug() << str;
    }
}
// 显示所有数据库信息
void MenuWidget::queryTable() {
    QString str = QString("SELECT 编号, image_path AS 图片, 名称, 价格, 数量, 备注 FROM goods");
    model.setQuery(str);

    if (model.lastError().isValid()) {
        qDebug() << "Query Error:" << model.lastError().text();
    }

    ui->table->setModel(&model);

    ImageDelegate* imageDelegate = new ImageDelegate(this);
    int imageColumnIndex = model.record().indexOf("图片");
    ui->table->setItemDelegateForColumn(imageColumnIndex, imageDelegate);

    // 添加一列用于按钮（在最后一列位置）
    int buttonColumnIndex = model.columnCount(); // 获取新的列索引
    model.insertColumn(buttonColumnIndex); // 在最后插入新列

    // 设置按钮列的标题
    model.setHeaderData(buttonColumnIndex, Qt::Horizontal, "操作");

    // 设置每一行的高度为100
    for (int row = 0; row < model.rowCount(); ++row) {
        ui->table->setRowHeight(row, 100);

        // 添加购买按钮
        QPushButton *buyButton = new QPushButton("购买");
        connect(buyButton, &QPushButton::clicked, this, [this, row]() {
            // 获取商品编号
            int buyId = model.record(row).value("编号").toInt();
            qDebug() << "Buying item with ID:" << buyId;

            // 设置当前购买对话框的extern_id以便在on_pushButton_clicked中使用
            extern_id = buyId;

            // 调用购买对话框的处理函数
            //            bug_pushButton_clicked();  // 这里调用实际的购买处理逻辑
        });

        // 添加联系卖家按钮
        QPushButton *contactButton = new QPushButton("联系卖家");
        contactButton->setMinimumHeight(50); // 设置联系卖家按钮的最小高度
        connect(contactButton, &QPushButton::clicked, this, [this, row]() {
            int contactId = model.record(row).value("编号").toInt();
            // 创建联系卖家对话框实例并传递商品ID
            ClientDialog *contactDialog = new ClientDialog(this, contactId);
            contactDialog->exec(); // 显示对话框
            qDebug() << "Contacting seller for item ID:" << contactId;
        });

        // 使用垂直布局，使按钮竖向排列
        QVBoxLayout *buttonLayout = new QVBoxLayout();
        buttonLayout->addWidget(buyButton);
        buttonLayout->addWidget(contactButton);

        QWidget *buttonWidget = new QWidget();
        buttonWidget->setLayout(buttonLayout);

        buttonLayout->setSpacing(5); // 设置按钮之间的间距

        // 确保将按钮添加到最后一列
        ui->table->setIndexWidget(model.index(row, buttonColumnIndex), buttonWidget);
    }

    // 设置编号列的宽度和调整模式
    int idColumnIndex = model.record().indexOf("编号"); // 获取编号列的索引
    ui->table->horizontalHeader()->setSectionResizeMode(idColumnIndex, QHeaderView::Fixed); // 设置为固定大小
    ui->table->setColumnWidth(idColumnIndex, 20); // 设置编号列的宽度，例如20像素

    // 设置价格列的宽度
    int priceColumnIndex = model.record().indexOf("价格"); // 获取价格列的索引
    ui->table->horizontalHeader()->setSectionResizeMode(priceColumnIndex, QHeaderView::Fixed); // 固定列宽
    ui->table->setColumnWidth(priceColumnIndex, 40); // 设置价格列的宽度，例如40像素

    // 设置数量列的宽度
    int quantityColumnIndex = model.record().indexOf("数量"); // 获取数量列的索引
    ui->table->horizontalHeader()->setSectionResizeMode(quantityColumnIndex, QHeaderView::Fixed); // 固定列宽
    ui->table->setColumnWidth(quantityColumnIndex, 40); // 设置数量列的宽度，例如40像素

    // 其他列设置为自适应
    for (int col = 0; col < model.columnCount(); ++col) {
        if (col != idColumnIndex && col != priceColumnIndex && col != quantityColumnIndex) {
            ui->table->horizontalHeader()->setSectionResizeMode(col, QHeaderView::Stretch);
        }
    }

    // 最后，确保表格更新并重新布局
    ui->table->resizeColumnsToContents();
    ui->table->horizontalHeader()->setStretchLastSection(true); // 让最后一列填满剩余空间
}



// 我的订单1
void MenuWidget::on_myOrderButton_clicked()
{
    myOrdersDialog *myOrders = new myOrdersDialog;
    myOrders->show();
}

// 发布商品
void MenuWidget::on_releaseButton_clicked()
{
    ReleaseGoodsDialog *release = new ReleaseGoodsDialog("user");
    release->show();
    this->close();
}

// 个人信息
void MenuWidget::on_myinfoButton_clicked()
{
    myProfileDialog *profile = new myProfileDialog;
    profile->show();
}

// 购买
void MenuWidget::on_buyButton_clicked()
{
    extern_id = ui->buyIdEdit->text().toInt();
    QSqlQuery query;
    QString str = QString("SELECT 编号 FROM goods WHERE 编号=%1").arg(extern_id);
    query.exec(str);query.next();
    if(query.value(0).toString() == ""){
        qDebug() << query.value(0).toString();
        QMessageBox msg;
        msg.setText("不存在该商品");
        msg.exec();
    }
    else{
        buyGoodsDialog *buy = new buyGoodsDialog;
        buy->show();
    }
}

// 排序
void MenuWidget::on_orderButton_clicked()
{
    // 获得按什么排序
    QString value = ui->speciesComboBox->currentText();
    // 获取排序方式
    QString sort;
    if(ui->howComboBox->currentIndex() == 0){
        sort = QString("ASC");
    }
    else{
        sort = QString("DESC");
    }
    QString str = QString("SELECT 编号,名称,价格,数量,备注 FROM goods ORDER BY %1 %2").arg(value).arg(sort);
    model.setQuery(str);
    ui->table->setModel(&model);
}

// 查找
void MenuWidget::on_searchButton_clicked()
{
    QString search = QString("SELECT 编号,名称,价格,数量,备注 FROM goods "
                             "WHERE 名称 LIKE '%%1%'").arg(ui->searchIdEdit->text());
    qDebug() << search;
    model.setQuery(search);
    ui->table->setModel(&model);
}


void MenuWidget::on_RenewpushButton_clicked()
{
    ui->searchIdEdit->setText("");
    queryTable();
}


void MenuWidget::on_pushButton_clicked()
{
    LoginDialog *login = new LoginDialog;
    this->close();
    login->show();
}

