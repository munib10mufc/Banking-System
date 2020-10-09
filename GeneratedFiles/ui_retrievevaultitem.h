/********************************************************************************
** Form generated from reading UI file 'retrievevaultitem.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETRIEVEVAULTITEM_H
#define UI_RETRIEVEVAULTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RetrieveVaultItem
{
public:
    QLabel *label_5;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *accountEdit;
    QLabel *label_2;
    QLineEdit *vaultIdEdit;
    QLabel *label_3;
    QLineEdit *itemIdEdit;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;
    QLabel *messagelabel;

    void setupUi(QWidget *RetrieveVaultItem)
    {
        if (RetrieveVaultItem->objectName().isEmpty())
            RetrieveVaultItem->setObjectName(QStringLiteral("RetrieveVaultItem"));
        RetrieveVaultItem->resize(668, 482);
        label_5 = new QLabel(RetrieveVaultItem);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 110, 211, 21));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(20);
        label_5->setFont(font);
        pushButton = new QPushButton(RetrieveVaultItem);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 320, 101, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        pushButton->setFont(font1);
        layoutWidget = new QWidget(RetrieveVaultItem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 190, 321, 74));
        layoutWidget->setFont(font1);
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        accountEdit = new QLineEdit(layoutWidget);
        accountEdit->setObjectName(QStringLiteral("accountEdit"));
        accountEdit->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, accountEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        vaultIdEdit = new QLineEdit(layoutWidget);
        vaultIdEdit->setObjectName(QStringLiteral("vaultIdEdit"));
        vaultIdEdit->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, vaultIdEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        itemIdEdit = new QLineEdit(layoutWidget);
        itemIdEdit->setObjectName(QStringLiteral("itemIdEdit"));
        itemIdEdit->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, itemIdEdit);

        graphicsView = new QGraphicsView(RetrieveVaultItem);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-130, -70, 871, 701));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton_2 = new QPushButton(RetrieveVaultItem);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 320, 91, 41));
        pushButton_2->setFont(font1);
        messagelabel = new QLabel(RetrieveVaultItem);
        messagelabel->setObjectName(QStringLiteral("messagelabel"));
        messagelabel->setGeometry(QRect(180, 410, 281, 16));
        messagelabel->setFont(font1);
        graphicsView->raise();
        label_5->raise();
        pushButton->raise();
        layoutWidget->raise();
        pushButton_2->raise();
        messagelabel->raise();

        retranslateUi(RetrieveVaultItem);
        QObject::connect(pushButton_2, SIGNAL(clicked()), RetrieveVaultItem, SLOT(backButtonClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), RetrieveVaultItem, SLOT(retrieveButtonClicked()));

        QMetaObject::connectSlotsByName(RetrieveVaultItem);
    } // setupUi

    void retranslateUi(QWidget *RetrieveVaultItem)
    {
        RetrieveVaultItem->setWindowTitle(QApplication::translate("RetrieveVaultItem", "RetrieveVaultItem", 0));
        label_5->setText(QApplication::translate("RetrieveVaultItem", "Retrieve Item", 0));
        pushButton->setText(QApplication::translate("RetrieveVaultItem", "Retrieve", 0));
        label->setText(QApplication::translate("RetrieveVaultItem", "Account No", 0));
        label_2->setText(QApplication::translate("RetrieveVaultItem", "Vault No", 0));
        label_3->setText(QApplication::translate("RetrieveVaultItem", "Item No", 0));
        pushButton_2->setText(QApplication::translate("RetrieveVaultItem", "Back", 0));
        messagelabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RetrieveVaultItem: public Ui_RetrieveVaultItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETRIEVEVAULTITEM_H
