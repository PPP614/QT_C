#ifndef BUYGOODSDIALOG_HPP
#define BUYGOODSDIALOG_HPP

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include <QInputDialog> // 添加这一行
namespace Ui {
class buyGoodsDialog;
}

class buyGoodsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit buyGoodsDialog(QWidget *parent = nullptr);
    ~buyGoodsDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
    void on_buyButton_clicked(); // 示例槽函数
    void createOrder(int rating);          // 确保这个声明存在

private:
    Ui::buyGoodsDialog *ui;
    QSqlDatabase db;
    void createDB();
    void createTable();
};

#endif // BUYGOODSDIALOG_HPP
