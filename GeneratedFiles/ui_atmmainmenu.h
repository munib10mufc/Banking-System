/********************************************************************************
** Form generated from reading UI file 'atmmainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATMMAINMENU_H
#define UI_ATMMAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AtmMainMenu
{
public:
    QPushButton *checkBalance_Button;
    QPushButton *changePin_Button;
    QLabel *heading_lebel;
    QPushButton *withdraw_Button;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *AtmMainMenu)
    {
        if (AtmMainMenu->objectName().isEmpty())
            AtmMainMenu->setObjectName(QStringLiteral("AtmMainMenu"));
        AtmMainMenu->resize(734, 504);
        checkBalance_Button = new QPushButton(AtmMainMenu);
        checkBalance_Button->setObjectName(QStringLiteral("checkBalance_Button"));
        checkBalance_Button->setGeometry(QRect(300, 380, 141, 61));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        checkBalance_Button->setFont(font);
        changePin_Button = new QPushButton(AtmMainMenu);
        changePin_Button->setObjectName(QStringLiteral("changePin_Button"));
        changePin_Button->setGeometry(QRect(300, 270, 141, 61));
        changePin_Button->setFont(font);
        heading_lebel = new QLabel(AtmMainMenu);
        heading_lebel->setObjectName(QStringLiteral("heading_lebel"));
        heading_lebel->setGeometry(QRect(110, 70, 521, 51));
        heading_lebel->setFont(font);
        withdraw_Button = new QPushButton(AtmMainMenu);
        withdraw_Button->setObjectName(QStringLiteral("withdraw_Button"));
        withdraw_Button->setGeometry(QRect(300, 170, 141, 61));
        withdraw_Button->setFont(font);
        graphicsView = new QGraphicsView(AtmMainMenu);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-5, -29, 891, 641));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        checkBalance_Button->raise();
        changePin_Button->raise();
        heading_lebel->raise();
        withdraw_Button->raise();

        retranslateUi(AtmMainMenu);

        QMetaObject::connectSlotsByName(AtmMainMenu);
    } // setupUi

    void retranslateUi(QWidget *AtmMainMenu)
    {
        AtmMainMenu->setWindowTitle(QApplication::translate("AtmMainMenu", "AtmMainMenu", 0));
        checkBalance_Button->setText(QApplication::translate("AtmMainMenu", "Check Balance", 0));
        changePin_Button->setText(QApplication::translate("AtmMainMenu", "Change PIN", 0));
        heading_lebel->setText(QApplication::translate("AtmMainMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">Please Select Your Transaction</span></p></body></html>", 0));
        withdraw_Button->setText(QApplication::translate("AtmMainMenu", "Withdraw Amount", 0));
    } // retranslateUi

};

namespace Ui {
    class AtmMainMenu: public Ui_AtmMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATMMAINMENU_H
