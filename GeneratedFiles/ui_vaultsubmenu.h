/********************************************************************************
** Form generated from reading UI file 'vaultsubmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VAULTSUBMENU_H
#define UI_VAULTSUBMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VaultSubMenu
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;

    void setupUi(QWidget *VaultSubMenu)
    {
        if (VaultSubMenu->objectName().isEmpty())
            VaultSubMenu->setObjectName(QStringLiteral("VaultSubMenu"));
        VaultSubMenu->resize(693, 530);
        label = new QLabel(VaultSubMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 60, 161, 21));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(20);
        label->setFont(font);
        layoutWidget = new QWidget(VaultSubMenu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 110, 231, 301));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        layoutWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font1);

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setFont(font1);

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font1);

        verticalLayout->addWidget(pushButton_8);

        layoutWidget_2 = new QWidget(VaultSubMenu);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(400, 110, 241, 291));
        layoutWidget_2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(layoutWidget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setFont(font1);

        verticalLayout_2->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(layoutWidget_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setFont(font1);

        verticalLayout_2->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setFont(font1);

        verticalLayout_2->addWidget(pushButton_12);

        graphicsView = new QGraphicsView(VaultSubMenu);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-190, -140, 1041, 731));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton = new QPushButton(VaultSubMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 450, 91, 41));
        graphicsView->raise();
        label->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        pushButton->raise();

        retranslateUi(VaultSubMenu);
        QObject::connect(pushButton_10, SIGNAL(clicked()), VaultSubMenu, SLOT(createVaultClicked()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), VaultSubMenu, SLOT(closeVaultClicked()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), VaultSubMenu, SLOT(addItemClicked()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), VaultSubMenu, SLOT(viewVaultItemsClicked()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), VaultSubMenu, SLOT(vaultDetailsClicked()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), VaultSubMenu, SLOT(retrieveItemClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), VaultSubMenu, SLOT(backButtonClicked()));

        QMetaObject::connectSlotsByName(VaultSubMenu);
    } // setupUi

    void retranslateUi(QWidget *VaultSubMenu)
    {
        VaultSubMenu->setWindowTitle(QApplication::translate("VaultSubMenu", "VaultSubMenu", 0));
        label->setText(QApplication::translate("VaultSubMenu", "Vault Menu", 0));
        pushButton_6->setText(QApplication::translate("VaultSubMenu", "Vault Details", 0));
        pushButton_7->setText(QApplication::translate("VaultSubMenu", "Retrieve Item", 0));
        pushButton_8->setText(QApplication::translate("VaultSubMenu", "Add Item", 0));
        pushButton_10->setText(QApplication::translate("VaultSubMenu", "Create Vault", 0));
        pushButton_11->setText(QApplication::translate("VaultSubMenu", "Close Vault", 0));
        pushButton_12->setText(QApplication::translate("VaultSubMenu", "View Vault Items", 0));
        pushButton->setText(QApplication::translate("VaultSubMenu", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class VaultSubMenu: public Ui_VaultSubMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VAULTSUBMENU_H
