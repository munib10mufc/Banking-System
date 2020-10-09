/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainMenu
{
public:
    QPushButton *checkBalance_Button;
    QPushButton *withdraw_Button;
    QLabel *heading_lebel;
    QPushButton *changePin_Button;

    void setupUi(QWidget *mainMenu)
    {
        if (mainMenu->objectName().isEmpty())
            mainMenu->setObjectName(QStringLiteral("mainMenu"));
        mainMenu->resize(615, 599);
        checkBalance_Button = new QPushButton(mainMenu);
        checkBalance_Button->setObjectName(QStringLiteral("checkBalance_Button"));
        checkBalance_Button->setGeometry(QRect(360, 190, 141, 61));
        withdraw_Button = new QPushButton(mainMenu);
        withdraw_Button->setObjectName(QStringLiteral("withdraw_Button"));
        withdraw_Button->setGeometry(QRect(120, 190, 141, 61));
        heading_lebel = new QLabel(mainMenu);
        heading_lebel->setObjectName(QStringLiteral("heading_lebel"));
        heading_lebel->setGeometry(QRect(140, 80, 341, 51));
        changePin_Button = new QPushButton(mainMenu);
        changePin_Button->setObjectName(QStringLiteral("changePin_Button"));
        changePin_Button->setGeometry(QRect(240, 310, 141, 61));

        retranslateUi(mainMenu);
        QObject::connect(withdraw_Button, SIGNAL(clicked()), mainMenu, SLOT(withdrawClicked()));
        QObject::connect(checkBalance_Button, SIGNAL(clicked()), mainMenu, SLOT(inquireBalanceClicked()));
        QObject::connect(changePin_Button, SIGNAL(clicked()), mainMenu, SLOT(changePinClicked()));

        QMetaObject::connectSlotsByName(mainMenu);
    } // setupUi

    void retranslateUi(QWidget *mainMenu)
    {
        mainMenu->setWindowTitle(QApplication::translate("mainMenu", "mainMenu", 0));
        checkBalance_Button->setText(QApplication::translate("mainMenu", "Check Balance", 0));
        withdraw_Button->setText(QApplication::translate("mainMenu", "Withdraw Amount", 0));
        heading_lebel->setText(QApplication::translate("mainMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Please Select Your Transaction</span></p></body></html>", 0));
        changePin_Button->setText(QApplication::translate("mainMenu", "Change PIN", 0));
    } // retranslateUi

};

namespace Ui {
    class mainMenu: public Ui_mainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
