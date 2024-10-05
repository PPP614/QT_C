/********************************************************************************
** Form generated from reading UI file 'myprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPROFILEDIALOG_H
#define UI_MYPROFILEDIALOG_H

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

class Ui_myProfileDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLineEdit *phoneEdit;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *addressEdit;
    QLabel *label_4;
    QLineEdit *usernameEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *changeButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *myProfileDialog)
    {
        if (myProfileDialog->objectName().isEmpty())
            myProfileDialog->setObjectName(QString::fromUtf8("myProfileDialog"));
        myProfileDialog->resize(331, 327);
        myProfileDialog->setMinimumSize(QSize(331, 327));
        myProfileDialog->setMaximumSize(QSize(331, 327));
        QFont font;
        font.setPointSize(15);
        myProfileDialog->setFont(font);
        myProfileDialog->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:8px;\n"
"}\n"
"QDialog{\n"
"	background-color: rgb(217, 226, 236);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(myProfileDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, 25);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(myProfileDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(-1);
        label->setIndent(-1);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(29);
        gridLayout->setContentsMargins(20, 25, 20, -1);
        phoneEdit = new QLineEdit(myProfileDialog);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(phoneEdit->sizePolicy().hasHeightForWidth());
        phoneEdit->setSizePolicy(sizePolicy);
        phoneEdit->setMinimumSize(QSize(0, 20));
        phoneEdit->setMaxLength(11);

        gridLayout->addWidget(phoneEdit, 1, 1, 1, 1);

        label_3 = new QLabel(myProfileDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(12);
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(myProfileDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        addressEdit = new QLineEdit(myProfileDialog);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        addressEdit->setEnabled(false);
        sizePolicy.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy);
        addressEdit->setMinimumSize(QSize(0, 46));
        addressEdit->setMaxLength(20);

        gridLayout->addWidget(addressEdit, 2, 1, 1, 1);

        label_4 = new QLabel(myProfileDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        usernameEdit = new QLineEdit(myProfileDialog);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setEnabled(false);
        usernameEdit->setMinimumSize(QSize(150, 20));

        gridLayout->addWidget(usernameEdit, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        changeButton = new QPushButton(myProfileDialog);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setFont(font2);

        horizontalLayout_2->addWidget(changeButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(myProfileDialog);

        QMetaObject::connectSlotsByName(myProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *myProfileDialog)
    {
        myProfileDialog->setWindowTitle(QCoreApplication::translate("myProfileDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("myProfileDialog", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("myProfileDialog", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("myProfileDialog", "\350\264\246\345\217\267:", nullptr));
        label_4->setText(QCoreApplication::translate("myProfileDialog", "\346\224\266\350\264\247\345\234\260\345\235\200:", nullptr));
        changeButton->setText(QCoreApplication::translate("myProfileDialog", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myProfileDialog: public Ui_myProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPROFILEDIALOG_H
