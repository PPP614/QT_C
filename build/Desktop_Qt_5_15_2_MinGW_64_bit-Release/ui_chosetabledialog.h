/********************************************************************************
** Form generated from reading UI file 'chosetabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOSETABLEDIALOG_H
#define UI_CHOSETABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_choseTableDialog
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *choseTableDialog)
    {
        if (choseTableDialog->objectName().isEmpty())
            choseTableDialog->setObjectName(QString::fromUtf8("choseTableDialog"));
        choseTableDialog->resize(212, 173);
        choseTableDialog->setMinimumSize(QSize(212, 173));
        choseTableDialog->setMaximumSize(QSize(212, 173));
        choseTableDialog->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: rgb(217, 226, 236);\n"
"}"));
        comboBox = new QComboBox(choseTableDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(60, 70, 101, 31));
        label = new QLabel(choseTableDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 91, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        pushButton = new QPushButton(choseTableDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 120, 71, 31));
        pushButton_2 = new QPushButton(choseTableDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 120, 71, 32));

        retranslateUi(choseTableDialog);

        QMetaObject::connectSlotsByName(choseTableDialog);
    } // setupUi

    void retranslateUi(QDialog *choseTableDialog)
    {
        choseTableDialog->setWindowTitle(QCoreApplication::translate("choseTableDialog", "\345\220\216\345\217\260\347\256\241\347\220\206\351\200\211\346\213\251", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("choseTableDialog", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("choseTableDialog", "\345\225\206\345\223\201\347\256\241\347\220\206", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("choseTableDialog", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));

        label->setText(QCoreApplication::translate("choseTableDialog", "\350\257\267\351\200\211\346\213\251\345\220\216\345\217\260", nullptr));
        pushButton->setText(QCoreApplication::translate("choseTableDialog", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("choseTableDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choseTableDialog: public Ui_choseTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOSETABLEDIALOG_H
