/********************************************************************************
** Form generated from reading UI file 'clientdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDIALOG_H
#define UI_CLIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *messageEdit;
    QPushButton *sendButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *serverIPEdit;
    QLabel *label_2;
    QLineEdit *serverPortEdit;
    QLineEdit *usernameEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_4;
    QRadioButton *statusRadio;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *connectButton;
    QPushButton *myButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *ClientDialog)
    {
        if (ClientDialog->objectName().isEmpty())
            ClientDialog->setObjectName(QString::fromUtf8("ClientDialog"));
        ClientDialog->resize(364, 565);
        QFont font;
        font.setPointSize(15);
        ClientDialog->setFont(font);
        ClientDialog->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:8px;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(ClientDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(ClientDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, -1, -1, -1);
        messageEdit = new QLineEdit(ClientDialog);
        messageEdit->setObjectName(QString::fromUtf8("messageEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(messageEdit->sizePolicy().hasHeightForWidth());
        messageEdit->setSizePolicy(sizePolicy);
        messageEdit->setMinimumSize(QSize(0, 37));

        horizontalLayout->addWidget(messageEdit);

        sendButton = new QPushButton(ClientDialog);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setEnabled(false);
        sendButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, -1, 20, -1);
        label = new QLabel(ClientDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        serverIPEdit = new QLineEdit(ClientDialog);
        serverIPEdit->setObjectName(QString::fromUtf8("serverIPEdit"));

        gridLayout->addWidget(serverIPEdit, 0, 1, 1, 1);

        label_2 = new QLabel(ClientDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        serverPortEdit = new QLineEdit(ClientDialog);
        serverPortEdit->setObjectName(QString::fromUtf8("serverPortEdit"));

        gridLayout->addWidget(serverPortEdit, 1, 1, 1, 1);

        usernameEdit = new QLineEdit(ClientDialog);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setEnabled(false);

        gridLayout->addWidget(usernameEdit, 2, 1, 1, 1);

        label_3 = new QLabel(ClientDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_4 = new QLabel(ClientDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(13);
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        statusRadio = new QRadioButton(ClientDialog);
        statusRadio->setObjectName(QString::fromUtf8("statusRadio"));
        statusRadio->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusRadio->sizePolicy().hasHeightForWidth());
        statusRadio->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(1);
        statusRadio->setFont(font2);
        statusRadio->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{\n"
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

        horizontalLayout_4->addWidget(statusRadio);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        connectButton = new QPushButton(ClientDialog);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        horizontalLayout_3->addWidget(connectButton);

        myButton = new QPushButton(ClientDialog);
        myButton->setObjectName(QString::fromUtf8("myButton"));

        horizontalLayout_3->addWidget(myButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(ClientDialog);

        QMetaObject::connectSlotsByName(ClientDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientDialog)
    {
        ClientDialog->setWindowTitle(QCoreApplication::translate("ClientDialog", "\350\201\212\345\244\251\345\256\244\345\256\242\346\210\267\347\253\257", nullptr));
        messageEdit->setText(QString());
        sendButton->setText(QCoreApplication::translate("ClientDialog", "\345\217\221\351\200\201", nullptr));
        label->setText(QCoreApplication::translate("ClientDialog", "\346\234\215\345\212\241\345\231\250IP", nullptr));
        serverIPEdit->setText(QCoreApplication::translate("ClientDialog", "127.0.0.1", nullptr));
        label_2->setText(QCoreApplication::translate("ClientDialog", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", nullptr));
        serverPortEdit->setText(QCoreApplication::translate("ClientDialog", "2333", nullptr));
        usernameEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("ClientDialog", "\346\210\221\347\232\204\346\230\265\347\247\260", nullptr));
        label_4->setText(QCoreApplication::translate("ClientDialog", "\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        statusRadio->setText(QString());
        connectButton->setText(QCoreApplication::translate("ClientDialog", "\350\277\236\346\216\245", nullptr));
        myButton->setText(QCoreApplication::translate("ClientDialog", "\346\210\221\347\232\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientDialog: public Ui_ClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDIALOG_H
