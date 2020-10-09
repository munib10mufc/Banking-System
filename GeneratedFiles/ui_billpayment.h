/********************************************************************************
** Form generated from reading UI file 'billpayment.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLPAYMENT_H
#define UI_BILLPAYMENT_H

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

class Ui_billPayment
{
public:
    QLabel *label_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label;
    QGraphicsView *graphicsView;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_2;
    QLabel *ErrorLabel;

    void setupUi(QWidget *billPayment)
    {
        if (billPayment->objectName().isEmpty())
            billPayment->setObjectName(QStringLiteral("billPayment"));
        billPayment->resize(697, 486);
        label_5 = new QLabel(billPayment);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 280, 81, 16));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        label_5->setFont(font);
        lineEdit = new QLineEdit(billPayment);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 200, 191, 20));
        lineEdit->setFont(font);
        pushButton = new QPushButton(billPayment);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 340, 91, 41));
        pushButton->setFont(font);
        label_4 = new QLabel(billPayment);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 240, 81, 16));
        label_4->setFont(font);
        lineEdit_3 = new QLineEdit(billPayment);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 280, 191, 20));
        lineEdit_3->setFont(font);
        label_2 = new QLabel(billPayment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 200, 81, 16));
        label_2->setFont(font);
        lineEdit_2 = new QLineEdit(billPayment);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 240, 191, 20));
        lineEdit_2->setFont(font);
        label_3 = new QLabel(billPayment);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 160, 51, 16));
        label_3->setFont(font);
        label = new QLabel(billPayment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 90, 191, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        graphicsView = new QGraphicsView(billPayment);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-50, 0, 1091, 731));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        lineEdit_4 = new QLineEdit(billPayment);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(290, 160, 191, 20));
        pushButton_2 = new QPushButton(billPayment);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(254, 340, 91, 41));
        ErrorLabel = new QLabel(billPayment);
        ErrorLabel->setObjectName(QStringLiteral("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(50, 440, 531, 16));
        graphicsView->raise();
        label_5->raise();
        lineEdit->raise();
        pushButton->raise();
        label_4->raise();
        lineEdit_3->raise();
        label_2->raise();
        lineEdit_2->raise();
        label_3->raise();
        label->raise();
        lineEdit_4->raise();
        pushButton_2->raise();
        ErrorLabel->raise();

        retranslateUi(billPayment);
        QObject::connect(pushButton_2, SIGNAL(clicked()), billPayment, SLOT(changeForm()));
        QObject::connect(pushButton, SIGNAL(clicked()), billPayment, SLOT(payClicked()));

        QMetaObject::connectSlotsByName(billPayment);
    } // setupUi

    void retranslateUi(QWidget *billPayment)
    {
        billPayment->setWindowTitle(QApplication::translate("billPayment", "billPayment", 0));
        label_5->setText(QApplication::translate("billPayment", "Paid Amount", 0));
        pushButton->setText(QApplication::translate("billPayment", "Pay", 0));
        label_4->setText(QApplication::translate("billPayment", "Bill Amount", 0));
        label_2->setText(QApplication::translate("billPayment", "Third Party", 0));
        label_3->setText(QApplication::translate("billPayment", "Bill ID", 0));
        label->setText(QApplication::translate("billPayment", "Bill Payment", 0));
        pushButton_2->setText(QApplication::translate("billPayment", "Back", 0));
        ErrorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class billPayment: public Ui_billPayment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLPAYMENT_H
