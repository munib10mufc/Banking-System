/********************************************************************************
** Form generated from reading UI file 'incentive.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCENTIVE_H
#define UI_INCENTIVE_H

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

class Ui_incentive
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;

    void setupUi(QWidget *incentive)
    {
        if (incentive->objectName().isEmpty())
            incentive->setObjectName(QStringLiteral("incentive"));
        incentive->resize(690, 511);
        label_2 = new QLabel(incentive);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 180, 81, 16));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        label_2->setFont(font);
        lineEdit = new QLineEdit(incentive);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(270, 180, 191, 20));
        lineEdit->setFont(font);
        pushButton = new QPushButton(incentive);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 340, 91, 41));
        pushButton->setFont(font);
        label = new QLabel(incentive);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 110, 231, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        label_3 = new QLabel(incentive);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 240, 46, 13));
        label_3->setFont(font);
        lineEdit_2 = new QLineEdit(incentive);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 240, 191, 51));
        lineEdit_2->setFont(font);
        graphicsView = new QGraphicsView(incentive);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-190, -70, 901, 671));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton_2 = new QPushButton(incentive);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 340, 91, 41));
        graphicsView->raise();
        label_2->raise();
        lineEdit->raise();
        pushButton->raise();
        label->raise();
        label_3->raise();
        lineEdit_2->raise();
        pushButton_2->raise();

        retranslateUi(incentive);
        QObject::connect(pushButton_2, SIGNAL(clicked()), incentive, SLOT(backButton()));
        QObject::connect(pushButton, SIGNAL(clicked()), incentive, SLOT(backButton()));

        QMetaObject::connectSlotsByName(incentive);
    } // setupUi

    void retranslateUi(QWidget *incentive)
    {
        incentive->setWindowTitle(QApplication::translate("incentive", "incentive", 0));
        label_2->setText(QApplication::translate("incentive", "Employee ID", 0));
        pushButton->setText(QApplication::translate("incentive", "Apply", 0));
        label->setText(QApplication::translate("incentive", "Incentive Form", 0));
        label_3->setText(QApplication::translate("incentive", "Comment", 0));
        pushButton_2->setText(QApplication::translate("incentive", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class incentive: public Ui_incentive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCENTIVE_H
