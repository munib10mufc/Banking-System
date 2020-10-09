/********************************************************************************
** Form generated from reading UI file 'additemtovault.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMTOVAULT_H
#define UI_ADDITEMTOVAULT_H

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

class Ui_AddItemToVault
{
public:
    QLabel *messagelabel;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *deslineEdit;
    QLabel *label_3;
    QLineEdit *weilineEdit;
    QLineEdit *itemnamelineEdit;
    QLabel *label_5;
    QGraphicsView *graphicsView;
    QLabel *label_6;
    QLineEdit *vaultnoEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AddItemToVault)
    {
        if (AddItemToVault->objectName().isEmpty())
            AddItemToVault->setObjectName(QStringLiteral("AddItemToVault"));
        AddItemToVault->resize(599, 442);
        messagelabel = new QLabel(AddItemToVault);
        messagelabel->setObjectName(QStringLiteral("messagelabel"));
        messagelabel->setGeometry(QRect(160, 380, 271, 20));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        messagelabel->setFont(font);
        pushButton = new QPushButton(AddItemToVault);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 310, 111, 41));
        pushButton->setFont(font);
        layoutWidget = new QWidget(AddItemToVault);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 200, 351, 81));
        layoutWidget->setFont(font);
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        deslineEdit = new QLineEdit(layoutWidget);
        deslineEdit->setObjectName(QStringLiteral("deslineEdit"));
        deslineEdit->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, deslineEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        weilineEdit = new QLineEdit(layoutWidget);
        weilineEdit->setObjectName(QStringLiteral("weilineEdit"));
        weilineEdit->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, weilineEdit);

        itemnamelineEdit = new QLineEdit(layoutWidget);
        itemnamelineEdit->setObjectName(QStringLiteral("itemnamelineEdit"));
        itemnamelineEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, itemnamelineEdit);

        label_5 = new QLabel(AddItemToVault);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 70, 131, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label_5->setFont(font1);
        graphicsView = new QGraphicsView(AddItemToVault);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-60, -120, 811, 631));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/guidesign/BackgroundImage.png);"));
        label_6 = new QLabel(AddItemToVault);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 170, 71, 20));
        label_6->setFont(font);
        vaultnoEdit = new QLineEdit(AddItemToVault);
        vaultnoEdit->setObjectName(QStringLiteral("vaultnoEdit"));
        vaultnoEdit->setGeometry(QRect(200, 170, 266, 20));
        vaultnoEdit->setFont(font);
        pushButton_2 = new QPushButton(AddItemToVault);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 310, 101, 41));
        graphicsView->raise();
        messagelabel->raise();
        pushButton->raise();
        layoutWidget->raise();
        label_5->raise();
        label_6->raise();
        vaultnoEdit->raise();
        pushButton_2->raise();

        retranslateUi(AddItemToVault);
        QObject::connect(pushButton, SIGNAL(clicked()), AddItemToVault, SLOT(addItemClicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), AddItemToVault, SLOT(backButtonClicked()));

        QMetaObject::connectSlotsByName(AddItemToVault);
    } // setupUi

    void retranslateUi(QWidget *AddItemToVault)
    {
        AddItemToVault->setWindowTitle(QApplication::translate("AddItemToVault", "AddItemToVault", 0));
        messagelabel->setText(QString());
        pushButton->setText(QApplication::translate("AddItemToVault", "Add Item", 0));
        label->setText(QApplication::translate("AddItemToVault", "Item Name", 0));
        label_2->setText(QApplication::translate("AddItemToVault", "Description", 0));
        label_3->setText(QApplication::translate("AddItemToVault", "Weight", 0));
        label_5->setText(QApplication::translate("AddItemToVault", "Add Item", 0));
        label_6->setText(QApplication::translate("AddItemToVault", "Vault No", 0));
        pushButton_2->setText(QApplication::translate("AddItemToVault", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class AddItemToVault: public Ui_AddItemToVault {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMTOVAULT_H
