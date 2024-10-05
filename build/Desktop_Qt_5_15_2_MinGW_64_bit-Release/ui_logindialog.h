/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *password;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QPushButton *forgetButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->setWindowModality(Qt::WindowModality::NonModal);
        LoginDialog->resize(268, 339);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginDialog->sizePolicy().hasHeightForWidth());
        LoginDialog->setSizePolicy(sizePolicy);
        LoginDialog->setMinimumSize(QSize(268, 300));
        LoginDialog->setMaximumSize(QSize(268, 339));
        QFont font;
        font.setPointSize(12);
        LoginDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoginDialog->setWindowIcon(icon);
        LoginDialog->setAutoFillBackground(false);
        LoginDialog->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:8px;\n"
"}\n"
"QDialog{\n"
"#background-image:url(\"/Users/xzajyjs/Desktop/logo.png\")\n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(LoginDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(78);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/logo.png);"));
        label_3->setScaledContents(false);
        label_3->setMargin(0);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 0, 10, -1);
        horizontalSpacer = new QSpacerItem(13, 125, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(11);
        gridLayout->setContentsMargins(16, 0, 16, -1);
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        username = new QLineEdit(LoginDialog);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(0, 20));
        username->setFont(font);
        username->setMaxLength(12);

        gridLayout->addWidget(username, 0, 1, 1, 1);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        password = new QLineEdit(LoginDialog);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setPointSize(14);
        password->setFont(font2);
        password->setMaxLength(16);
        password->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(password, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font3;
        font3.setPointSize(9);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        radioButton = new QRadioButton(LoginDialog);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setEnabled(false);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{\n"
"	width:8px;\n"
"	height:8px;\n"
"	border-radius:5px;\n"
"	border-style: solid;\n"
"	border-width: 0.5px;\n"
"	border-color: black;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"	background-color:green;\n"
"}\n"
"QRadioButton::indicator:unchecked {\n"
"	background-color:rgb(255, 60, 13);\n"
"}"));

        horizontalLayout_2->addWidget(radioButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(16);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, -1, 10, 17);
        loginButton = new QPushButton(LoginDialog);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setFont(font);

        horizontalLayout->addWidget(loginButton);

        registerButton = new QPushButton(LoginDialog);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setFont(font);

        horizontalLayout->addWidget(registerButton);

        forgetButton = new QPushButton(LoginDialog);
        forgetButton->setObjectName(QString::fromUtf8("forgetButton"));
        forgetButton->setFont(font);

        horizontalLayout->addWidget(forgetButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(13, 125, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\351\227\262\345\275\255 \346\240\241\345\233\255\344\272\214\346\211\213\344\272\244\346\230\223", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("LoginDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("LoginDialog", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245\347\212\266\346\200\201:", nullptr));
        radioButton->setText(QString());
        loginButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
        forgetButton->setText(QCoreApplication::translate("LoginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
