/********************************************************************************
** Form generated from reading UI file 'menuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGET_H
#define UI_MENUWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *usernameLabel;
    QPushButton *pushButton;
    QPushButton *myOrderButton;
    QPushButton *releaseButton;
    QPushButton *myinfoButton;
    QTableView *table;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLineEdit *buyIdEdit;
    QPushButton *buyButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *speciesComboBox;
    QComboBox *howComboBox;
    QPushButton *orderButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_4;
    QLineEdit *searchIdEdit;
    QPushButton *searchButton;
    QPushButton *RenewpushButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *MenuWidget)
    {
        if (MenuWidget->objectName().isEmpty())
            MenuWidget->setObjectName(QString::fromUtf8("MenuWidget"));
        MenuWidget->resize(579, 576);
        MenuWidget->setMinimumSize(QSize(358, 357));
        MenuWidget->setMaximumSize(QSize(579, 576));
        QFont font;
        font.setPointSize(12);
        MenuWidget->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MenuWidget->setWindowIcon(icon);
        MenuWidget->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:8px;\n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(MenuWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MenuWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        usernameLabel = new QLabel(MenuWidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        verticalLayout->addWidget(usernameLabel);


        horizontalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(MenuWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        myOrderButton = new QPushButton(MenuWidget);
        myOrderButton->setObjectName(QString::fromUtf8("myOrderButton"));

        horizontalLayout_2->addWidget(myOrderButton);

        releaseButton = new QPushButton(MenuWidget);
        releaseButton->setObjectName(QString::fromUtf8("releaseButton"));

        horizontalLayout_2->addWidget(releaseButton);

        myinfoButton = new QPushButton(MenuWidget);
        myinfoButton->setObjectName(QString::fromUtf8("myinfoButton"));

        horizontalLayout_2->addWidget(myinfoButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        table = new QTableView(MenuWidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setTextElideMode(Qt::TextElideMode::ElideRight);

        verticalLayout_2->addWidget(table);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer_4 = new QSpacerItem(56, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_3 = new QLabel(MenuWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        buyIdEdit = new QLineEdit(MenuWidget);
        buyIdEdit->setObjectName(QString::fromUtf8("buyIdEdit"));
        buyIdEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(buyIdEdit);

        buyButton = new QPushButton(MenuWidget);
        buyButton->setObjectName(QString::fromUtf8("buyButton"));

        horizontalLayout->addWidget(buyButton);

        horizontalSpacer = new QSpacerItem(56, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(56, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        speciesComboBox = new QComboBox(MenuWidget);
        speciesComboBox->addItem(QString());
        speciesComboBox->addItem(QString());
        speciesComboBox->setObjectName(QString::fromUtf8("speciesComboBox"));

        horizontalLayout_3->addWidget(speciesComboBox);

        howComboBox = new QComboBox(MenuWidget);
        howComboBox->addItem(QString());
        howComboBox->addItem(QString());
        howComboBox->setObjectName(QString::fromUtf8("howComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(howComboBox->sizePolicy().hasHeightForWidth());
        howComboBox->setSizePolicy(sizePolicy);
        howComboBox->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(howComboBox);

        orderButton = new QPushButton(MenuWidget);
        orderButton->setObjectName(QString::fromUtf8("orderButton"));

        horizontalLayout_3->addWidget(orderButton);

        horizontalSpacer_2 = new QSpacerItem(56, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(56, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_4 = new QLabel(MenuWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        searchIdEdit = new QLineEdit(MenuWidget);
        searchIdEdit->setObjectName(QString::fromUtf8("searchIdEdit"));
        searchIdEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(searchIdEdit);

        searchButton = new QPushButton(MenuWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout_4->addWidget(searchButton);

        RenewpushButton = new QPushButton(MenuWidget);
        RenewpushButton->setObjectName(QString::fromUtf8("RenewpushButton"));

        horizontalLayout_4->addWidget(RenewpushButton);

        horizontalSpacer_3 = new QSpacerItem(56, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(MenuWidget);

        QMetaObject::connectSlotsByName(MenuWidget);
    } // setupUi

    void retranslateUi(QWidget *MenuWidget)
    {
        MenuWidget->setWindowTitle(QCoreApplication::translate("MenuWidget", "\345\225\206\345\223\201\346\265\217\350\247\210", nullptr));
        label->setText(QCoreApplication::translate("MenuWidget", "\345\275\223\345\211\215\347\231\273\345\275\225\347\224\250\346\210\267:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MenuWidget", "haha123", nullptr));
        pushButton->setText(QCoreApplication::translate("MenuWidget", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        myOrderButton->setText(QCoreApplication::translate("MenuWidget", "\346\210\221\347\232\204\350\256\242\345\215\225", nullptr));
        releaseButton->setText(QCoreApplication::translate("MenuWidget", "\345\217\221\345\270\203\345\225\206\345\223\201", nullptr));
        myinfoButton->setText(QCoreApplication::translate("MenuWidget", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("MenuWidget", "\345\225\206\345\223\201\347\274\226\345\217\267", nullptr));
        buyButton->setText(QCoreApplication::translate("MenuWidget", "\350\264\255\344\271\260", nullptr));
        speciesComboBox->setItemText(0, QCoreApplication::translate("MenuWidget", "\347\274\226\345\217\267", nullptr));
        speciesComboBox->setItemText(1, QCoreApplication::translate("MenuWidget", "\344\273\267\346\240\274", nullptr));

        howComboBox->setItemText(0, QCoreApplication::translate("MenuWidget", "\344\273\216\345\260\217\345\210\260\345\244\247", nullptr));
        howComboBox->setItemText(1, QCoreApplication::translate("MenuWidget", "\344\273\216\345\244\247\345\210\260\345\260\217", nullptr));

        orderButton->setText(QCoreApplication::translate("MenuWidget", "\346\216\222\345\272\217", nullptr));
        label_4->setText(QCoreApplication::translate("MenuWidget", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        searchButton->setText(QCoreApplication::translate("MenuWidget", "\346\237\245\350\257\242", nullptr));
        RenewpushButton->setText(QCoreApplication::translate("MenuWidget", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWidget: public Ui_MenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGET_H
