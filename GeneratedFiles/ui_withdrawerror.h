/********************************************************************************
** Form generated from reading UI file 'withdrawerror.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWERROR_H
#define UI_WITHDRAWERROR_H

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

class Ui_WithdrawError
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *WithdrawError)
    {
        if (WithdrawError->objectName().isEmpty())
            WithdrawError->setObjectName(QStringLiteral("WithdrawError"));
        WithdrawError->resize(546, 427);
        pushButton = new QPushButton(WithdrawError);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 280, 121, 51));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        pushButton->setFont(font);
        label_2 = new QLabel(WithdrawError);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 180, 451, 41));
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::Box);
        label = new QLabel(WithdrawError);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 90, 381, 31));
        label->setFont(font);
        graphicsView = new QGraphicsView(WithdrawError);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-95, -89, 651, 581));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        pushButton->raise();
        label_2->raise();
        label->raise();

        retranslateUi(WithdrawError);

        QMetaObject::connectSlotsByName(WithdrawError);
    } // setupUi

    void retranslateUi(QWidget *WithdrawError)
    {
        WithdrawError->setWindowTitle(QApplication::translate("WithdrawError", "WithdrawError", 0));
        pushButton->setText(QApplication::translate("WithdrawError", "Back", 0));
        label_2->setText(QApplication::translate("WithdrawError", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Error: amount not present in ATM</span></p></body></html>", 0));
        label->setText(QApplication::translate("WithdrawError", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">Withdraw Balance Error</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class WithdrawError: public Ui_WithdrawError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWERROR_H
