/********************************************************************************
** Form generated from reading UI file 'myordersdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYORDERSDIALOG_H
#define UI_MYORDERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_myOrdersDialog
{
public:
    QTableView *tableView;

    void setupUi(QDialog *myOrdersDialog)
    {
        if (myOrdersDialog->objectName().isEmpty())
            myOrdersDialog->setObjectName(QString::fromUtf8("myOrdersDialog"));
        myOrdersDialog->resize(517, 460);
        tableView = new QTableView(myOrdersDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 517, 461));

        retranslateUi(myOrdersDialog);

        QMetaObject::connectSlotsByName(myOrdersDialog);
    } // setupUi

    void retranslateUi(QDialog *myOrdersDialog)
    {
        myOrdersDialog->setWindowTitle(QCoreApplication::translate("myOrdersDialog", "\346\210\221\347\232\204\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myOrdersDialog: public Ui_myOrdersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYORDERSDIALOG_H
