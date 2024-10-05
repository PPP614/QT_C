/********************************************************************************
** Form generated from reading UI file 'buygoodsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYGOODSDIALOG_H
#define UI_BUYGOODSDIALOG_H

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

class Ui_buyGoodsDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *idLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *label_3;
    QLineEdit *phoneLineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *noticeLineEdit;
    QLabel *label_6;
    QLineEdit *priceLineEdit;
    QLabel *label_7;
    QLineEdit *numberLineEdit;
    QLineEdit *addressLineEdit;
    QLabel *label_8;
    QLineEdit *buyLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *buyGoodsDialog)
    {
        if (buyGoodsDialog->objectName().isEmpty())
            buyGoodsDialog->setObjectName(QString::fromUtf8("buyGoodsDialog"));
        buyGoodsDialog->resize(293, 307);
        buyGoodsDialog->setMinimumSize(QSize(293, 307));
        buyGoodsDialog->setMaximumSize(QSize(293, 330));
        QFont font;
        font.setPointSize(10);
        buyGoodsDialog->setFont(font);
        buyGoodsDialog->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:8px;\n"
"}\n"
"QDialog{\n"
"	background-color: rgb(217, 226, 236);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(buyGoodsDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(18);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(33, -1, 33, 33);
        label_2 = new QLabel(buyGoodsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(buyGoodsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        idLineEdit = new QLineEdit(buyGoodsDialog);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setEnabled(false);

        gridLayout->addWidget(idLineEdit, 0, 1, 1, 1);

        nameLineEdit = new QLineEdit(buyGoodsDialog);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setEnabled(false);

        gridLayout->addWidget(nameLineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(buyGoodsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        phoneLineEdit = new QLineEdit(buyGoodsDialog);
        phoneLineEdit->setObjectName(QString::fromUtf8("phoneLineEdit"));
        phoneLineEdit->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(phoneLineEdit->sizePolicy().hasHeightForWidth());
        phoneLineEdit->setSizePolicy(sizePolicy);
        phoneLineEdit->setMinimumSize(QSize(127, 0));

        gridLayout->addWidget(phoneLineEdit, 6, 1, 1, 1);

        label_4 = new QLabel(buyGoodsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(buyGoodsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        noticeLineEdit = new QLineEdit(buyGoodsDialog);
        noticeLineEdit->setObjectName(QString::fromUtf8("noticeLineEdit"));
        noticeLineEdit->setEnabled(false);

        gridLayout->addWidget(noticeLineEdit, 4, 1, 1, 1);

        label_6 = new QLabel(buyGoodsDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        priceLineEdit = new QLineEdit(buyGoodsDialog);
        priceLineEdit->setObjectName(QString::fromUtf8("priceLineEdit"));
        priceLineEdit->setEnabled(false);

        gridLayout->addWidget(priceLineEdit, 2, 1, 1, 1);

        label_7 = new QLabel(buyGoodsDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        numberLineEdit = new QLineEdit(buyGoodsDialog);
        numberLineEdit->setObjectName(QString::fromUtf8("numberLineEdit"));
        numberLineEdit->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(numberLineEdit->sizePolicy().hasHeightForWidth());
        numberLineEdit->setSizePolicy(sizePolicy1);
        numberLineEdit->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(numberLineEdit, 3, 1, 1, 1);

        addressLineEdit = new QLineEdit(buyGoodsDialog);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));
        addressLineEdit->setEnabled(false);
        addressLineEdit->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(addressLineEdit, 5, 1, 1, 1);

        label_8 = new QLabel(buyGoodsDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        buyLineEdit = new QLineEdit(buyGoodsDialog);
        buyLineEdit->setObjectName(QString::fromUtf8("buyLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buyLineEdit->sizePolicy().hasHeightForWidth());
        buyLineEdit->setSizePolicy(sizePolicy2);
        buyLineEdit->setMinimumSize(QSize(0, 68));

        gridLayout->addWidget(buyLineEdit, 7, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(buyGoodsDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(buyGoodsDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        retranslateUi(buyGoodsDialog);

        QMetaObject::connectSlotsByName(buyGoodsDialog);
    } // setupUi

    void retranslateUi(QDialog *buyGoodsDialog)
    {
        buyGoodsDialog->setWindowTitle(QCoreApplication::translate("buyGoodsDialog", "\350\264\255\344\271\260", nullptr));
        label_2->setText(QCoreApplication::translate("buyGoodsDialog", "\344\272\247\345\223\201\345\220\215\347\247\260", nullptr));
        label->setText(QCoreApplication::translate("buyGoodsDialog", "\344\272\247\345\223\201\347\274\226\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("buyGoodsDialog", "\344\272\247\345\223\201\344\273\267\346\240\274", nullptr));
        label_4->setText(QCoreApplication::translate("buyGoodsDialog", "\344\272\247\345\223\201\345\272\223\345\255\230", nullptr));
        label_5->setText(QCoreApplication::translate("buyGoodsDialog", "\344\272\247\345\223\201\345\244\207\346\263\250", nullptr));
        label_6->setText(QCoreApplication::translate("buyGoodsDialog", "\346\224\266\350\264\247\345\234\260\345\235\200", nullptr));
        label_7->setText(QCoreApplication::translate("buyGoodsDialog", "\350\201\224\347\263\273\346\211\213\346\234\272", nullptr));
        label_8->setText(QCoreApplication::translate("buyGoodsDialog", "\350\264\255\344\271\260\345\244\207\346\263\250", nullptr));
        pushButton->setText(QCoreApplication::translate("buyGoodsDialog", "\350\264\255\344\271\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("buyGoodsDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buyGoodsDialog: public Ui_buyGoodsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYGOODSDIALOG_H
