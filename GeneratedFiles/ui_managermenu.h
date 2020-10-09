/********************************************************************************
** Form generated from reading UI file 'managermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERMENU_H
#define UI_MANAGERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerMenu
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *PendingLoansButton;
    QPushButton *EmployeeInfoButton;
    QPushButton *ProvideIncentiveButton;
    QPushButton *LogoutBotton;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *ManagerMenu)
    {
        if (ManagerMenu->objectName().isEmpty())
            ManagerMenu->setObjectName(QStringLiteral("ManagerMenu"));
        ManagerMenu->resize(644, 567);
        label = new QLabel(ManagerMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 130, 81, 31));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(25);
        label->setFont(font);
        layoutWidget = new QWidget(ManagerMenu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 210, 271, 141));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        layoutWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PendingLoansButton = new QPushButton(layoutWidget);
        PendingLoansButton->setObjectName(QStringLiteral("PendingLoansButton"));
        PendingLoansButton->setFont(font1);

        verticalLayout->addWidget(PendingLoansButton);

        EmployeeInfoButton = new QPushButton(layoutWidget);
        EmployeeInfoButton->setObjectName(QStringLiteral("EmployeeInfoButton"));
        EmployeeInfoButton->setFont(font1);

        verticalLayout->addWidget(EmployeeInfoButton);

        ProvideIncentiveButton = new QPushButton(layoutWidget);
        ProvideIncentiveButton->setObjectName(QStringLiteral("ProvideIncentiveButton"));
        ProvideIncentiveButton->setFont(font1);

        verticalLayout->addWidget(ProvideIncentiveButton);

        LogoutBotton = new QPushButton(layoutWidget);
        LogoutBotton->setObjectName(QStringLiteral("LogoutBotton"));

        verticalLayout->addWidget(LogoutBotton);

        graphicsView = new QGraphicsView(ManagerMenu);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-180, -410, 831, 951));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        label->raise();
        layoutWidget->raise();

        retranslateUi(ManagerMenu);
        QObject::connect(PendingLoansButton, SIGNAL(clicked()), ManagerMenu, SLOT(PendingLoanClicked()));
        QObject::connect(EmployeeInfoButton, SIGNAL(clicked()), ManagerMenu, SLOT(EmployeeInfoClicked()));
        QObject::connect(ProvideIncentiveButton, SIGNAL(clicked()), ManagerMenu, SLOT(ProvideIncentiveClicked()));
        QObject::connect(LogoutBotton, SIGNAL(clicked()), ManagerMenu, SLOT(LogoutClicked()));

        QMetaObject::connectSlotsByName(ManagerMenu);
    } // setupUi

    void retranslateUi(QWidget *ManagerMenu)
    {
        ManagerMenu->setWindowTitle(QApplication::translate("ManagerMenu", "ManagerMenu", 0));
        label->setText(QApplication::translate("ManagerMenu", "MENU", 0));
        PendingLoansButton->setText(QApplication::translate("ManagerMenu", "Pending Loans", 0));
        EmployeeInfoButton->setText(QApplication::translate("ManagerMenu", "Employee Information", 0));
        ProvideIncentiveButton->setText(QApplication::translate("ManagerMenu", "Provide Intcentives", 0));
        LogoutBotton->setText(QApplication::translate("ManagerMenu", "Logout", 0));
    } // retranslateUi

};

namespace Ui {
    class ManagerMenu: public Ui_ManagerMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERMENU_H
