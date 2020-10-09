/********************************************************************************
** Form generated from reading UI file 'withdrawcashthroughcheque.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWCASHTHROUGHCHEQUE_H
#define UI_WITHDRAWCASHTHROUGHCHEQUE_H

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

class Ui_withdrawCashThroughCheque
{
public:
    QLineEdit *AccountNumberEdit;
    QLabel *AmountToWithdraw;
    QLabel *AccountNumber;
    QLabel *label;
    QPushButton *Submit;
    QLineEdit *AmountToWithdrawEdit;
    QLabel *CurrentBalance;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *withdrawCashThroughCheque)
    {
        if (withdrawCashThroughCheque->objectName().isEmpty())
            withdrawCashThroughCheque->setObjectName(QStringLiteral("withdrawCashThroughCheque"));
        withdrawCashThroughCheque->resize(669, 445);
        AccountNumberEdit = new QLineEdit(withdrawCashThroughCheque);
        AccountNumberEdit->setObjectName(QStringLiteral("AccountNumberEdit"));
        AccountNumberEdit->setGeometry(QRect(290, 130, 221, 20));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        AccountNumberEdit->setFont(font);
        AmountToWithdraw = new QLabel(withdrawCashThroughCheque);
        AmountToWithdraw->setObjectName(QStringLiteral("AmountToWithdraw"));
        AmountToWithdraw->setGeometry(QRect(110, 180, 171, 16));
        AmountToWithdraw->setFont(font);
        AccountNumber = new QLabel(withdrawCashThroughCheque);
        AccountNumber->setObjectName(QStringLiteral("AccountNumber"));
        AccountNumber->setGeometry(QRect(140, 130, 141, 16));
        AccountNumber->setFont(font);
        label = new QLabel(withdrawCashThroughCheque);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 60, 211, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        Submit = new QPushButton(withdrawCashThroughCheque);
        Submit->setObjectName(QStringLiteral("Submit"));
        Submit->setGeometry(QRect(270, 240, 111, 41));
        Submit->setFont(font);
        AmountToWithdrawEdit = new QLineEdit(withdrawCashThroughCheque);
        AmountToWithdrawEdit->setObjectName(QStringLiteral("AmountToWithdrawEdit"));
        AmountToWithdrawEdit->setGeometry(QRect(290, 180, 221, 20));
        AmountToWithdrawEdit->setFont(font);
        CurrentBalance = new QLabel(withdrawCashThroughCheque);
        CurrentBalance->setObjectName(QStringLiteral("CurrentBalance"));
        CurrentBalance->setGeometry(QRect(160, 320, 291, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("OCR A Extended"));
        font2.setPointSize(10);
        CurrentBalance->setFont(font2);
        graphicsView = new QGraphicsView(withdrawCashThroughCheque);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-75, -99, 971, 721));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        AccountNumberEdit->raise();
        AmountToWithdraw->raise();
        AccountNumber->raise();
        label->raise();
        Submit->raise();
        AmountToWithdrawEdit->raise();
        CurrentBalance->raise();

        retranslateUi(withdrawCashThroughCheque);

        QMetaObject::connectSlotsByName(withdrawCashThroughCheque);
    } // setupUi

    void retranslateUi(QWidget *withdrawCashThroughCheque)
    {
        withdrawCashThroughCheque->setWindowTitle(QApplication::translate("withdrawCashThroughCheque", "withdrawCashThroughCheque", 0));
        AmountToWithdraw->setText(QApplication::translate("withdrawCashThroughCheque", "Enter amount to withdraw:", 0));
        AccountNumber->setText(QApplication::translate("withdrawCashThroughCheque", "Enter account number:", 0));
        label->setText(QApplication::translate("withdrawCashThroughCheque", "Withdraw Cash", 0));
        Submit->setText(QApplication::translate("withdrawCashThroughCheque", "Submit", 0));
        CurrentBalance->setText(QApplication::translate("withdrawCashThroughCheque", "Current balance:", 0));
    } // retranslateUi

};

namespace Ui {
    class withdrawCashThroughCheque: public Ui_withdrawCashThroughCheque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWCASHTHROUGHCHEQUE_H
