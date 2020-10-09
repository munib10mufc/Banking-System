/********************************************************************************
** Form generated from reading UI file 'loanapplication.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOANAPPLICATION_H
#define UI_LOANAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoanApplication
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_3;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;

    void setupUi(QWidget *LoanApplication)
    {
        if (LoanApplication->objectName().isEmpty())
            LoanApplication->setObjectName(QStringLiteral("LoanApplication"));
        LoanApplication->resize(644, 435);
        layoutWidget = new QWidget(LoanApplication);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 190, 351, 71));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        layoutWidget->setFont(font);
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(LoanApplication);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 90, 261, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label_4->setFont(font1);
        pushButton = new QPushButton(LoanApplication);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 280, 151, 41));
        pushButton->setFont(font);
        label_3 = new QLabel(LoanApplication);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 360, 271, 20));
        label_3->setFont(font);
        graphicsView = new QGraphicsView(LoanApplication);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-155, -79, 991, 581));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton_2 = new QPushButton(LoanApplication);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 340, 151, 41));
        pushButton_2->setFont(font);
        graphicsView->raise();
        layoutWidget->raise();
        label_4->raise();
        pushButton->raise();
        label_3->raise();
        pushButton_2->raise();

        retranslateUi(LoanApplication);
        QObject::connect(pushButton, SIGNAL(clicked()), LoanApplication, SLOT(OnApplyClick()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), LoanApplication, SLOT(Back()));

        QMetaObject::connectSlotsByName(LoanApplication);
    } // setupUi

    void retranslateUi(QWidget *LoanApplication)
    {
        LoanApplication->setWindowTitle(QApplication::translate("LoanApplication", "LoanApplication", 0));
        label->setText(QApplication::translate("LoanApplication", "Account Number", 0));
        label_2->setText(QApplication::translate("LoanApplication", "Amount", 0));
        label_4->setText(QApplication::translate("LoanApplication", "Loan Application", 0));
        pushButton->setText(QApplication::translate("LoanApplication", "Apply for Loan", 0));
        label_3->setText(QString());
        pushButton_2->setText(QApplication::translate("LoanApplication", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class LoanApplication: public Ui_LoanApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANAPPLICATION_H
