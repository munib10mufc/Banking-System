/********************************************************************************
** Form generated from reading UI file 'accountsubmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTSUBMENU_H
#define UI_ACCOUNTSUBMENU_H

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

class Ui_AccountSubMenu
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QLabel *label;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_9;

    void setupUi(QWidget *AccountSubMenu)
    {
        if (AccountSubMenu->objectName().isEmpty())
            AccountSubMenu->setObjectName(QStringLiteral("AccountSubMenu"));
        AccountSubMenu->resize(695, 497);
        layoutWidget = new QWidget(AccountSubMenu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 110, 221, 311));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setKerning(true);
        pushButton_2->setFont(font1);
        pushButton_2->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font);

        verticalLayout->addWidget(pushButton_5);

        layoutWidget_2 = new QWidget(AccountSubMenu);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(380, 110, 211, 311));
        layoutWidget_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setFont(font);

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font);

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_4 = new QPushButton(layoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(layoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font);

        verticalLayout_2->addWidget(pushButton_6);

        label = new QLabel(AccountSubMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 36, 201, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("OCR A Extended"));
        font2.setPointSize(20);
        label->setFont(font2);
        graphicsView = new QGraphicsView(AccountSubMenu);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-35, -79, 901, 701));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton_9 = new QPushButton(AccountSubMenu);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(310, 450, 75, 23));
        graphicsView->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        label->raise();
        pushButton_9->raise();

        retranslateUi(AccountSubMenu);
        QObject::connect(pushButton_7, SIGNAL(clicked()), AccountSubMenu, SLOT(onCreateCurrentAccountClicked()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), AccountSubMenu, SLOT(onCreateSavingAccountClicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), AccountSubMenu, SLOT(onWithdrawCashCLicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), AccountSubMenu, SLOT(onDepositCashClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), AccountSubMenu, SLOT(onAccountDetailsClicked()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), AccountSubMenu, SLOT(onTransferMoneyClicked()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), AccountSubMenu, SLOT(onModifyAccountClicked()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), AccountSubMenu, SLOT(onCloseAccountClicked()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), AccountSubMenu, SLOT(backButtonClicked()));

        QMetaObject::connectSlotsByName(AccountSubMenu);
    } // setupUi

    void retranslateUi(QWidget *AccountSubMenu)
    {
        AccountSubMenu->setWindowTitle(QApplication::translate("AccountSubMenu", "AccountSubMenu", 0));
        pushButton_2->setText(QApplication::translate("AccountSubMenu", "Withdraw Cash", 0));
        pushButton_3->setText(QApplication::translate("AccountSubMenu", "Deposit Cash", 0));
        pushButton->setText(QApplication::translate("AccountSubMenu", "Account Details", 0));
        pushButton_5->setText(QApplication::translate("AccountSubMenu", "Transfer Money", 0));
        pushButton_7->setText(QApplication::translate("AccountSubMenu", "Create Current Account", 0));
        pushButton_8->setText(QApplication::translate("AccountSubMenu", "Create Savings Account", 0));
        pushButton_4->setText(QApplication::translate("AccountSubMenu", "Modify Account", 0));
        pushButton_6->setText(QApplication::translate("AccountSubMenu", "Close Account", 0));
        label->setText(QApplication::translate("AccountSubMenu", "Account Menu", 0));
        pushButton_9->setText(QApplication::translate("AccountSubMenu", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class AccountSubMenu: public Ui_AccountSubMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTSUBMENU_H
