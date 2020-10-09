/********************************************************************************
** Form generated from reading UI file 'tellermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELLERMENU_H
#define UI_TELLERMENU_H

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

class Ui_TellerMenu
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QGraphicsView *graphicsView;
    QPushButton *logout;

    void setupUi(QWidget *TellerMenu)
    {
        if (TellerMenu->objectName().isEmpty())
            TellerMenu->setObjectName(QStringLiteral("TellerMenu"));
        TellerMenu->resize(677, 500);
        label = new QLabel(TellerMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 20, 71, 21));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(20);
        label->setFont(font);
        layoutWidget = new QWidget(TellerMenu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 80, 241, 361));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        layoutWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setFont(font1);

        verticalLayout->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setFont(font1);

        verticalLayout->addWidget(pushButton_12);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        verticalLayoutWidget_2 = new QWidget(TellerMenu);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(60, 80, 251, 361));
        verticalLayoutWidget_2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(verticalLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font1);

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(verticalLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setFont(font1);

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(verticalLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font1);

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_10 = new QPushButton(verticalLayoutWidget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setFont(font1);

        verticalLayout_2->addWidget(pushButton_10);

        graphicsView = new QGraphicsView(TellerMenu);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-175, -119, 1051, 751));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        logout = new QPushButton(TellerMenu);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(310, 460, 75, 23));
        graphicsView->raise();
        label->raise();
        layoutWidget->raise();
        verticalLayoutWidget_2->raise();
        logout->raise();

        retranslateUi(TellerMenu);
        QObject::connect(pushButton_6, SIGNAL(clicked(bool)), TellerMenu, SLOT(accountOptionClicked()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), TellerMenu, SLOT(vaultOptionsClicked()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), TellerMenu, SLOT(makeCashDraft()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), TellerMenu, SLOT(applyLoanClicked()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), TellerMenu, SLOT(billPaymentClicked()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), TellerMenu, SLOT(creditCardOptionClicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TellerMenu, SLOT(atmCardOptionClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), TellerMenu, SLOT(chequeBookOptionClicked()));
        QObject::connect(logout, SIGNAL(clicked()), TellerMenu, SLOT(logout()));

        QMetaObject::connectSlotsByName(TellerMenu);
    } // setupUi

    void retranslateUi(QWidget *TellerMenu)
    {
        TellerMenu->setWindowTitle(QApplication::translate("TellerMenu", "TellerMenu", 0));
        label->setText(QApplication::translate("TellerMenu", "MENU", 0));
        pushButton_11->setText(QApplication::translate("TellerMenu", "Pay Bill", 0));
        pushButton_12->setText(QApplication::translate("TellerMenu", "Credit Card Application", 0));
        pushButton_2->setText(QApplication::translate("TellerMenu", "ATM Card Application", 0));
        pushButton->setText(QApplication::translate("TellerMenu", "Cheque Book Application", 0));
        pushButton_6->setText(QApplication::translate("TellerMenu", "Account Options", 0));
        pushButton_7->setText(QApplication::translate("TellerMenu", "Vault Options", 0));
        pushButton_8->setText(QApplication::translate("TellerMenu", "Draft Options", 0));
        pushButton_10->setText(QApplication::translate("TellerMenu", "Loan Options", 0));
        logout->setText(QApplication::translate("TellerMenu", "LogOut", 0));
    } // retranslateUi

};

namespace Ui {
    class TellerMenu: public Ui_TellerMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELLERMENU_H
