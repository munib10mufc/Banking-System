/********************************************************************************
** Form generated from reading UI file 'bankstatement.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKSTATEMENT_H
#define UI_BANKSTATEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bankStatement
{
public:
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_3;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *bankStatement)
    {
        if (bankStatement->objectName().isEmpty())
            bankStatement->setObjectName(QStringLiteral("bankStatement"));
        bankStatement->resize(696, 472);
        dateTimeEdit = new QDateTimeEdit(bankStatement);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(290, 200, 194, 22));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        dateTimeEdit->setFont(font);
        label_2 = new QLabel(bankStatement);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 140, 101, 16));
        label_2->setFont(font);
        pushButton = new QPushButton(bankStatement);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 290, 131, 51));
        pushButton->setFont(font);
        label = new QLabel(bankStatement);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 80, 231, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        lineEdit = new QLineEdit(bankStatement);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 140, 191, 20));
        lineEdit->setFont(font);
        label_4 = new QLabel(bankStatement);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 370, 191, 20));
        label_4->setFont(font);
        label_3 = new QLabel(bankStatement);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 200, 71, 16));
        label_3->setFont(font);
        graphicsView = new QGraphicsView(bankStatement);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-175, -99, 951, 721));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        dateTimeEdit->raise();
        label_2->raise();
        pushButton->raise();
        label->raise();
        lineEdit->raise();
        label_4->raise();
        label_3->raise();

        retranslateUi(bankStatement);

        QMetaObject::connectSlotsByName(bankStatement);
    } // setupUi

    void retranslateUi(QWidget *bankStatement)
    {
        bankStatement->setWindowTitle(QApplication::translate("bankStatement", "bankStatement", 0));
        label_2->setText(QApplication::translate("bankStatement", "Account Number", 0));
        pushButton->setText(QApplication::translate("bankStatement", "Generate Report", 0));
        label->setText(QApplication::translate("bankStatement", "Bank Statement", 0));
        label_4->setText(QString());
        label_3->setText(QApplication::translate("bankStatement", "Start time", 0));
    } // retranslateUi

};

namespace Ui {
    class bankStatement: public Ui_bankStatement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKSTATEMENT_H
