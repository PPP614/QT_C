/********************************************************************************
** Form generated from reading UI file 'forgetpasswddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWDDIALOG_H
#define UI_FORGETPASSWDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_forgetPasswdDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *new_username;
    QLabel *label_2;
    QLineEdit *newFirst_passwd;
    QLabel *label_3;
    QLineEdit *newSec_passwd;
    QHBoxLayout *horizontalLayout;
    QPushButton *changeButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *forgetPasswdDialog)
    {
        if (forgetPasswdDialog->objectName().isEmpty())
            forgetPasswdDialog->setObjectName(QString::fromUtf8("forgetPasswdDialog"));
        forgetPasswdDialog->resize(310, 198);
        forgetPasswdDialog->setMinimumSize(QSize(310, 198));
        forgetPasswdDialog->setMaximumSize(QSize(310, 198));
        QFont font;
        font.setPointSize(9);
        forgetPasswdDialog->setFont(font);
        forgetPasswdDialog->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:8px;\n"
"}\n"
"QDialog{\n"
"	background-color: rgb(217, 226, 236);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(forgetPasswdDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(16);
        gridLayout->setContentsMargins(-1, -1, -1, 16);
        label = new QLabel(forgetPasswdDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        new_username = new QLineEdit(forgetPasswdDialog);
        new_username->setObjectName(QString::fromUtf8("new_username"));
        new_username->setMinimumSize(QSize(0, 20));
        new_username->setFont(font1);
        new_username->setMaxLength(12);

        gridLayout->addWidget(new_username, 0, 1, 1, 1);

        label_2 = new QLabel(forgetPasswdDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        newFirst_passwd = new QLineEdit(forgetPasswdDialog);
        newFirst_passwd->setObjectName(QString::fromUtf8("newFirst_passwd"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newFirst_passwd->sizePolicy().hasHeightForWidth());
        newFirst_passwd->setSizePolicy(sizePolicy);
        newFirst_passwd->setMinimumSize(QSize(147, 20));
        newFirst_passwd->setMaxLength(16);
        newFirst_passwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(newFirst_passwd, 1, 1, 1, 1);

        label_3 = new QLabel(forgetPasswdDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        newSec_passwd = new QLineEdit(forgetPasswdDialog);
        newSec_passwd->setObjectName(QString::fromUtf8("newSec_passwd"));
        newSec_passwd->setMinimumSize(QSize(0, 20));
        newSec_passwd->setMaxLength(16);
        newSec_passwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(newSec_passwd, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        changeButton = new QPushButton(forgetPasswdDialog);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));

        horizontalLayout->addWidget(changeButton);

        cancelButton = new QPushButton(forgetPasswdDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        retranslateUi(forgetPasswdDialog);

        QMetaObject::connectSlotsByName(forgetPasswdDialog);
    } // setupUi

    void retranslateUi(QDialog *forgetPasswdDialog)
    {
        forgetPasswdDialog->setWindowTitle(QCoreApplication::translate("forgetPasswdDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("forgetPasswdDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        new_username->setText(QString());
        label_2->setText(QCoreApplication::translate("forgetPasswdDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("forgetPasswdDialog", "\345\206\215\350\276\223\344\270\200\346\254\241:", nullptr));
        changeButton->setText(QCoreApplication::translate("forgetPasswdDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        cancelButton->setText(QCoreApplication::translate("forgetPasswdDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgetPasswdDialog: public Ui_forgetPasswdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWDDIALOG_H
