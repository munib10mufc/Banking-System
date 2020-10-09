/********************************************************************************
** Form generated from reading UI file 'transfermoney.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERMONEY_H
#define UI_TRANSFERMONEY_H

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

class Ui_TransferMoney
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;

    void setupUi(QWidget *TransferMoney)
    {
        if (TransferMoney->objectName().isEmpty())
            TransferMoney->setObjectName(QStringLiteral("TransferMoney"));
        TransferMoney->resize(738, 511);
        lineEdit = new QLineEdit(TransferMoney);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(310, 160, 221, 20));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        lineEdit->setFont(font);
        lineEdit_3 = new QLineEdit(TransferMoney);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(310, 260, 221, 20));
        lineEdit_3->setFont(font);
        label = new QLabel(TransferMoney);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 160, 161, 21));
        label->setFont(font);
        label_2 = new QLabel(TransferMoney);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 210, 181, 20));
        label_2->setFont(font);
        label_4 = new QLabel(TransferMoney);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 90, 221, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(TransferMoney);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 400, 281, 16));
        label_5->setFont(font);
        lineEdit_2 = new QLineEdit(TransferMoney);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(310, 210, 221, 20));
        lineEdit_2->setFont(font);
        label_3 = new QLabel(TransferMoney);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 260, 41, 16));
        label_3->setFont(font);
        pushButton = new QPushButton(TransferMoney);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 320, 111, 41));
        pushButton->setFont(font);
        graphicsView = new QGraphicsView(TransferMoney);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-65, -79, 901, 731));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton_2 = new QPushButton(TransferMoney);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 420, 75, 23));
        graphicsView->raise();
        lineEdit->raise();
        lineEdit_3->raise();
        label->raise();
        label_2->raise();
        label_4->raise();
        label_5->raise();
        lineEdit_2->raise();
        label_3->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(TransferMoney);
        QObject::connect(pushButton, SIGNAL(clicked()), TransferMoney, SLOT(onClickTransferMoney()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TransferMoney, SLOT(Back4()));

        QMetaObject::connectSlotsByName(TransferMoney);
    } // setupUi

    void retranslateUi(QWidget *TransferMoney)
    {
        TransferMoney->setWindowTitle(QApplication::translate("TransferMoney", "TransferMoney", 0));
        label->setText(QApplication::translate("TransferMoney", "Sender's Account Number", 0));
        label_2->setText(QApplication::translate("TransferMoney", "Receiver's Account Number", 0));
        label_4->setText(QApplication::translate("TransferMoney", "Transfer Money", 0));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("TransferMoney", "Amount", 0));
        pushButton->setText(QApplication::translate("TransferMoney", "Transfer Money", 0));
        pushButton_2->setText(QApplication::translate("TransferMoney", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class TransferMoney: public Ui_TransferMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERMONEY_H
