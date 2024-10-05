/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *new_username;
    QLineEdit *newFirst_passwd;
    QLineEdit *newSec_passwd;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *addressEdit;
    QLabel *label_5;
    QLineEdit *phoneEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QString::fromUtf8("RegisterDialog"));
        RegisterDialog->resize(310, 227);
        RegisterDialog->setMinimumSize(QSize(310, 227));
        RegisterDialog->setMaximumSize(QSize(310, 227));
        RegisterDialog->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:8px;\n"
"}\n"
"QDialog{\n"
"	background-color: rgb(217, 226, 236);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(RegisterDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(12);
        gridLayout->setContentsMargins(-1, -1, -1, 10);
        label_3 = new QLabel(RegisterDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(10);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(RegisterDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        new_username = new QLineEdit(RegisterDialog);
        new_username->setObjectName(QString::fromUtf8("new_username"));
        new_username->setMaxLength(12);

        gridLayout->addWidget(new_username, 0, 1, 1, 1);

        newFirst_passwd = new QLineEdit(RegisterDialog);
        newFirst_passwd->setObjectName(QString::fromUtf8("newFirst_passwd"));
        newFirst_passwd->setMaxLength(16);
        newFirst_passwd->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(newFirst_passwd, 1, 1, 1, 1);

        newSec_passwd = new QLineEdit(RegisterDialog);
        newSec_passwd->setObjectName(QString::fromUtf8("newSec_passwd"));
        newSec_passwd->setMinimumSize(QSize(137, 0));
        newSec_passwd->setMaxLength(16);
        newSec_passwd->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(newSec_passwd, 2, 1, 1, 1);

        label_4 = new QLabel(RegisterDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(RegisterDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        addressEdit = new QLineEdit(RegisterDialog);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy);
        addressEdit->setMinimumSize(QSize(0, 23));
        addressEdit->setMaxLength(20);

        gridLayout->addWidget(addressEdit, 4, 1, 1, 1);

        label_5 = new QLabel(RegisterDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setBaseSize(QSize(0, 0));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        phoneEdit_2 = new QLineEdit(RegisterDialog);
        phoneEdit_2->setObjectName(QString::fromUtf8("phoneEdit_2"));
        phoneEdit_2->setMaxLength(11);

        gridLayout->addWidget(phoneEdit_2, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        registerButton = new QPushButton(RegisterDialog);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        horizontalLayout->addWidget(registerButton);

        cancelButton = new QPushButton(RegisterDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterDialog", "\345\206\215\350\276\223\344\270\200\346\254\241:", nullptr));
        label->setText(QCoreApplication::translate("RegisterDialog", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterDialog", "\346\211\213\346\234\272\345\217\267:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterDialog", "\345\255\246\346\240\241\345\217\212\345\234\260\345\235\200", nullptr));
        registerButton->setText(QCoreApplication::translate("RegisterDialog", "\346\263\250\345\206\214", nullptr));
        cancelButton->setText(QCoreApplication::translate("RegisterDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
