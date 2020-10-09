/********************************************************************************
** Form generated from reading UI file 'checkbalance.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKBALANCE_H
#define UI_CHECKBALANCE_H

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

class Ui_checkBalance
{
public:
    QLabel *label;
    QLabel *CurrentBalance;
    QPushButton *CheckBalance;
    QLineEdit *AccountNumberEdit;
    QLabel *AccountNumber;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *checkBalance)
    {
        if (checkBalance->objectName().isEmpty())
            checkBalance->setObjectName(QStringLiteral("checkBalance"));
        checkBalance->resize(680, 484);
        label = new QLabel(checkBalance);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 100, 211, 20));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(20);
        label->setFont(font);
        CurrentBalance = new QLabel(checkBalance);
        CurrentBalance->setObjectName(QStringLiteral("CurrentBalance"));
        CurrentBalance->setGeometry(QRect(200, 330, 251, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(10);
        CurrentBalance->setFont(font1);
        CheckBalance = new QPushButton(checkBalance);
        CheckBalance->setObjectName(QStringLiteral("CheckBalance"));
        CheckBalance->setGeometry(QRect(280, 240, 131, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("OCR A Extended"));
        CheckBalance->setFont(font2);
        AccountNumberEdit = new QLineEdit(checkBalance);
        AccountNumberEdit->setObjectName(QStringLiteral("AccountNumberEdit"));
        AccountNumberEdit->setGeometry(QRect(330, 170, 191, 20));
        AccountNumberEdit->setFont(font2);
        AccountNumber = new QLabel(checkBalance);
        AccountNumber->setObjectName(QStringLiteral("AccountNumber"));
        AccountNumber->setGeometry(QRect(170, 170, 141, 16));
        AccountNumber->setFont(font2);
        graphicsView = new QGraphicsView(checkBalance);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-245, -59, 1121, 711));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        label->raise();
        CurrentBalance->raise();
        CheckBalance->raise();
        AccountNumberEdit->raise();
        AccountNumber->raise();

        retranslateUi(checkBalance);

        QMetaObject::connectSlotsByName(checkBalance);
    } // setupUi

    void retranslateUi(QWidget *checkBalance)
    {
        checkBalance->setWindowTitle(QApplication::translate("checkBalance", "checkBalance", 0));
        label->setText(QApplication::translate("checkBalance", "Check Balance", 0));
        CurrentBalance->setText(QApplication::translate("checkBalance", "Current balance: ", 0));
        CheckBalance->setText(QApplication::translate("checkBalance", "Check Balance", 0));
        AccountNumber->setText(QApplication::translate("checkBalance", "Enter account number:", 0));
    } // retranslateUi

};

namespace Ui {
    class checkBalance: public Ui_checkBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKBALANCE_H
