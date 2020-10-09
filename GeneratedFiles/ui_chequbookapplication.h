/********************************************************************************
** Form generated from reading UI file 'chequbookapplication.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEQUBOOKAPPLICATION_H
#define UI_CHEQUBOOKAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChequBookApplication
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ChequBookApplication)
    {
        if (ChequBookApplication->objectName().isEmpty())
            ChequBookApplication->setObjectName(QStringLiteral("ChequBookApplication"));
        ChequBookApplication->resize(400, 300);
        label = new QLabel(ChequBookApplication);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 141, 16));
        label_2 = new QLabel(ChequBookApplication);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 91, 16));
        lineEdit = new QLineEdit(ChequBookApplication);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 70, 113, 20));
        pushButton = new QPushButton(ChequBookApplication);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 120, 75, 23));
        pushButton_2 = new QPushButton(ChequBookApplication);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 170, 75, 23));

        retranslateUi(ChequBookApplication);
        QObject::connect(pushButton, SIGNAL(clicked()), ChequBookApplication, SLOT(onApplyclick()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), ChequBookApplication, SLOT(Back1()));

        QMetaObject::connectSlotsByName(ChequBookApplication);
    } // setupUi

    void retranslateUi(QWidget *ChequBookApplication)
    {
        ChequBookApplication->setWindowTitle(QApplication::translate("ChequBookApplication", "ChequBookApplication", 0));
        label->setText(QApplication::translate("ChequBookApplication", "Cheque Book Application", 0));
        label_2->setText(QApplication::translate("ChequBookApplication", "Account Number", 0));
        pushButton->setText(QApplication::translate("ChequBookApplication", "Apply", 0));
        pushButton_2->setText(QApplication::translate("ChequBookApplication", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ChequBookApplication: public Ui_ChequBookApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEQUBOOKAPPLICATION_H
