/********************************************************************************
** Form generated from reading UI file 'atmcardapplication.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATMCARDAPPLICATION_H
#define UI_ATMCARDAPPLICATION_H

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

class Ui_AtmCardApplication
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *AtmCardApplication)
    {
        if (AtmCardApplication->objectName().isEmpty())
            AtmCardApplication->setObjectName(QStringLiteral("AtmCardApplication"));
        AtmCardApplication->resize(536, 491);
        label = new QLabel(AtmCardApplication);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 331, 41));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(AtmCardApplication);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 110, 121, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        label_2->setFont(font1);
        lineEdit = new QLineEdit(AtmCardApplication);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(280, 110, 161, 20));
        lineEdit->setFont(font1);
        pushButton = new QPushButton(AtmCardApplication);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 350, 101, 41));
        pushButton->setFont(font1);
        graphicsView = new QGraphicsView(AtmCardApplication);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-255, -119, 1001, 611));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton_2 = new QPushButton(AtmCardApplication);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 350, 101, 41));
        pushButton_2->setFont(font1);
        label_3 = new QLabel(AtmCardApplication);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 70, 46, 13));
        lineEdit_2 = new QLineEdit(AtmCardApplication);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 70, 161, 20));
        lineEdit_3 = new QLineEdit(AtmCardApplication);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(280, 150, 161, 20));
        label_4 = new QLabel(AtmCardApplication);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 160, 46, 13));
        label_5 = new QLabel(AtmCardApplication);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 200, 61, 16));
        label_6 = new QLabel(AtmCardApplication);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 250, 71, 16));
        lineEdit_4 = new QLineEdit(AtmCardApplication);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(280, 200, 161, 20));
        lineEdit_5 = new QLineEdit(AtmCardApplication);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(280, 250, 161, 20));
        graphicsView->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_3->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();

        retranslateUi(AtmCardApplication);
        QObject::connect(pushButton_2, SIGNAL(clicked()), AtmCardApplication, SLOT(backButtonClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), AtmCardApplication, SLOT(applyButtonClicked()));

        QMetaObject::connectSlotsByName(AtmCardApplication);
    } // setupUi

    void retranslateUi(QWidget *AtmCardApplication)
    {
        AtmCardApplication->setWindowTitle(QApplication::translate("AtmCardApplication", "AtmCardApplication", 0));
        label->setText(QApplication::translate("AtmCardApplication", "ATM Card Application", 0));
        label_2->setText(QApplication::translate("AtmCardApplication", "Account Number", 0));
        pushButton->setText(QApplication::translate("AtmCardApplication", "Apply", 0));
        pushButton_2->setText(QApplication::translate("AtmCardApplication", "Back", 0));
        label_3->setText(QApplication::translate("AtmCardApplication", "Card ID", 0));
        label_4->setText(QApplication::translate("AtmCardApplication", "Pin", 0));
        label_5->setText(QApplication::translate("AtmCardApplication", "Expiry Date", 0));
        label_6->setText(QApplication::translate("AtmCardApplication", "Issued Date", 0));
    } // retranslateUi

};

namespace Ui {
    class AtmCardApplication: public Ui_AtmCardApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATMCARDAPPLICATION_H
