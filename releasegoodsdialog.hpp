#ifndef RELEASEGOODSDIALOG_HPP
#define RELEASEGOODSDIALOG_HPP

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QValidator>
#include <QString> // 引入 QString 头文件

namespace Ui {
class ReleaseGoodsDialog;
}

class ReleaseGoodsDialog : public QDialog
{
    Q_OBJECT

public:
    ReleaseGoodsDialog(const QString &from, QWidget *parent = nullptr);
    ~ReleaseGoodsDialog();

private slots:
    void on_releaseButton_clicked();
    void on_cancelButton_clicked();
    void on_chooseImageButton_clicked(); // 添加选择图片的槽函数

signals:
    void order();

private:
    Ui::ReleaseGoodsDialog *ui;
    void createDB();
    QSqlDatabase db;
    QString selectedImagePath; // 用于存储所选图片的路径
};

#endif // RELEASEGOODSDIALOG_HPP
