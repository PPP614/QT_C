/********************************************************************************
** Form generated from reading UI file 'releasegoodsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELEASEGOODSDIALOG_H
#define UI_RELEASEGOODSDIALOG_H

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

class Ui_ReleaseGoodsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *leftLayout;
    QSpacerItem *verticalSpacer;
    QLabel *imageLabel;
    QPushButton *chooseImageButton;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *rightLayout;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *idEdit;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *priceEdit;
    QLabel *label_4;
    QLineEdit *numberEdit;
    QLabel *label_5;
    QLineEdit *noticeEdit;
    QHBoxLayout *buttonLayout;
    QPushButton *cancelButton;
    QPushButton *releaseButton;

    void setupUi(QDialog *ReleaseGoodsDialog)
    {
        if (ReleaseGoodsDialog->objectName().isEmpty())
            ReleaseGoodsDialog->setObjectName(QString::fromUtf8("ReleaseGoodsDialog"));
        ReleaseGoodsDialog->resize(400, 350);
        ReleaseGoodsDialog->setMinimumSize(QSize(350, 300));
        ReleaseGoodsDialog->setMaximumSize(QSize(888, 888));
        QFont font;
        font.setPointSize(12);
        ReleaseGoodsDialog->setFont(font);
        ReleaseGoodsDialog->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius:8px; padding:5px; } QDialog{ background-color: rgb(217, 226, 236); } QPushButton{ padding:8px; }"));
        verticalLayout = new QVBoxLayout(ReleaseGoodsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftLayout = new QVBoxLayout();
        leftLayout->setSpacing(6);
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        leftLayout->setContentsMargins(-1, -1, 0, -1);
        verticalSpacer = new QSpacerItem(20, 55, QSizePolicy::Policy::Maximum, QSizePolicy::Minimum);

        leftLayout->addItem(verticalSpacer);

        imageLabel = new QLabel(ReleaseGoodsDialog);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setMinimumSize(QSize(100, 100));
        imageLabel->setTextFormat(Qt::TextFormat::AutoText);
        imageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        leftLayout->addWidget(imageLabel);

        chooseImageButton = new QPushButton(ReleaseGoodsDialog);
        chooseImageButton->setObjectName(QString::fromUtf8("chooseImageButton"));
        chooseImageButton->setEnabled(true);

        leftLayout->addWidget(chooseImageButton);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Policy::Maximum, QSizePolicy::Minimum);

        leftLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(leftLayout);

        rightLayout = new QVBoxLayout();
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        label_6 = new QLabel(ReleaseGoodsDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(19);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        rightLayout->addWidget(label_6);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(ReleaseGoodsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        idEdit = new QLineEdit(ReleaseGoodsDialog);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setMaxLength(10);
        idEdit->setProperty("fixedSize", QVariant(QSize(150, 30)));

        gridLayout->addWidget(idEdit, 0, 1, 1, 1);

        label_2 = new QLabel(ReleaseGoodsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(ReleaseGoodsDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMaxLength(20);
        nameEdit->setProperty("fixedSize", QVariant(QSize(150, 30)));

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_3 = new QLabel(ReleaseGoodsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        priceEdit = new QLineEdit(ReleaseGoodsDialog);
        priceEdit->setObjectName(QString::fromUtf8("priceEdit"));
        priceEdit->setMaxLength(10);
        priceEdit->setProperty("fixedSize", QVariant(QSize(150, 30)));

        gridLayout->addWidget(priceEdit, 2, 1, 1, 1);

        label_4 = new QLabel(ReleaseGoodsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        numberEdit = new QLineEdit(ReleaseGoodsDialog);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setMaxLength(10);
        numberEdit->setProperty("fixedSize", QVariant(QSize(150, 30)));

        gridLayout->addWidget(numberEdit, 3, 1, 1, 1);

        label_5 = new QLabel(ReleaseGoodsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        noticeEdit = new QLineEdit(ReleaseGoodsDialog);
        noticeEdit->setObjectName(QString::fromUtf8("noticeEdit"));
        noticeEdit->setMaxLength(50);
        noticeEdit->setProperty("fixedSize", QVariant(QSize(150, 30)));

        gridLayout->addWidget(noticeEdit, 4, 1, 1, 1);


        rightLayout->addLayout(gridLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        cancelButton = new QPushButton(ReleaseGoodsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        buttonLayout->addWidget(cancelButton);

        releaseButton = new QPushButton(ReleaseGoodsDialog);
        releaseButton->setObjectName(QString::fromUtf8("releaseButton"));

        buttonLayout->addWidget(releaseButton);


        rightLayout->addLayout(buttonLayout);


        horizontalLayout->addLayout(rightLayout);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ReleaseGoodsDialog);

        QMetaObject::connectSlotsByName(ReleaseGoodsDialog);
    } // setupUi

    void retranslateUi(QDialog *ReleaseGoodsDialog)
    {
        ReleaseGoodsDialog->setWindowTitle(QCoreApplication::translate("ReleaseGoodsDialog", "\345\217\221\345\270\203\345\225\206\345\223\201", nullptr));
        imageLabel->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\345\225\206\345\223\201\345\233\276\347\211\207", nullptr));
        chooseImageButton->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
        label_6->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\345\225\206\345\223\201\345\217\221\345\270\203", nullptr));
        label->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\345\225\206\345\223\201\347\274\226\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\345\225\206\345\223\201\344\273\267\346\240\274", nullptr));
        label_4->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\345\225\206\345\223\201\346\225\260\351\207\217", nullptr));
        label_5->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\345\244\207\346\263\250", nullptr));
        cancelButton->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\350\277\224\345\233\236", nullptr));
        releaseButton->setText(QCoreApplication::translate("ReleaseGoodsDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReleaseGoodsDialog: public Ui_ReleaseGoodsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELEASEGOODSDIALOG_H
