/********************************************************************************
** Form generated from reading UI file 'withdrawbalance.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWBALANCE_H
#define UI_WITHDRAWBALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WithdrawBalance
{
public:
    QLabel *enter_amount;
    QLineEdit *lineEdit;
    QPushButton *enter_Button;
    QLabel *withdrawBalance;
    QGraphicsView *graphicsView;
    QLineEdit *lineEdit_2;
    QLabel *enter_amount_2;
    QPushButton *pushButton;

    void setupUi(QWidget *WithdrawBalance)
    {
        if (WithdrawBalance->objectName().isEmpty())
            WithdrawBalance->setObjectName(QStringLiteral("WithdrawBalance"));
        WithdrawBalance->resize(630, 494);
        enter_amount = new QLabel(WithdrawBalance);
        enter_amount->setObjectName(QStringLiteral("enter_amount"));
        enter_amount->setGeometry(QRect(140, 230, 131, 20));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setItalic(false);
        enter_amount->setFont(font);
        lineEdit = new QLineEdit(WithdrawBalance);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(310, 230, 171, 20));
        lineEdit->setFont(font);
        enter_Button = new QPushButton(WithdrawBalance);
        enter_Button->setObjectName(QStringLiteral("enter_Button"));
        enter_Button->setGeometry(QRect(260, 310, 121, 51));
        enter_Button->setFont(font);
        withdrawBalance = new QLabel(WithdrawBalance);
        withdrawBalance->setObjectName(QStringLiteral("withdrawBalance"));
        withdrawBalance->setGeometry(QRect(180, 110, 271, 31));
        withdrawBalance->setFont(font);
        graphicsView = new QGraphicsView(WithdrawBalance);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-135, -129, 911, 641));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        lineEdit_2 = new QLineEdit(WithdrawBalance);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(310, 190, 171, 20));
        lineEdit_2->setFont(font);
        enter_amount_2 = new QLabel(WithdrawBalance);
        enter_amount_2->setObjectName(QStringLiteral("enter_amount_2"));
        enter_amount_2->setGeometry(QRect(140, 190, 141, 20));
        enter_amount_2->setFont(font);
        pushButton = new QPushButton(WithdrawBalance);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 410, 75, 23));
        graphicsView->raise();
        enter_amount->raise();
        lineEdit->raise();
        enter_Button->raise();
        withdrawBalance->raise();
        lineEdit_2->raise();
        enter_amount_2->raise();
        pushButton->raise();

        retranslateUi(WithdrawBalance);
        QObject::connect(enter_Button, SIGNAL(clicked()), WithdrawBalance, SLOT(OnEnterClick()));
        QObject::connect(pushButton, SIGNAL(clicked()), WithdrawBalance, SLOT(Back2()));

        QMetaObject::connectSlotsByName(WithdrawBalance);
    } // setupUi

    void retranslateUi(QWidget *WithdrawBalance)
    {
        WithdrawBalance->setWindowTitle(QApplication::translate("WithdrawBalance", "WithdrawBalance", 0));
        enter_amount->setText(QApplication::translate("WithdrawBalance", "<html><head/><body><p><span style=\" font-size:12pt;\">enter amount </span></p></body></html>", 0));
        enter_Button->setText(QApplication::translate("WithdrawBalance", "enter", 0));
        withdrawBalance->setText(QApplication::translate("WithdrawBalance", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">Withdraw Balance</span></p></body></html>", 0));
        enter_amount_2->setText(QApplication::translate("WithdrawBalance", "<html><head/><body><p><span style=\" font-size:12pt;\">Account Number</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("WithdrawBalance", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class WithdrawBalance: public Ui_WithdrawBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWBALANCE_H
