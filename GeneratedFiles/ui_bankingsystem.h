/********************************************************************************
** Form generated from reading UI file 'bankingsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKINGSYSTEM_H
#define UI_BANKINGSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BankingSystemClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BankingSystemClass)
    {
        if (BankingSystemClass->objectName().isEmpty())
            BankingSystemClass->setObjectName(QStringLiteral("BankingSystemClass"));
        BankingSystemClass->resize(600, 400);
        menuBar = new QMenuBar(BankingSystemClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        BankingSystemClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BankingSystemClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BankingSystemClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(BankingSystemClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BankingSystemClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BankingSystemClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BankingSystemClass->setStatusBar(statusBar);

        retranslateUi(BankingSystemClass);

        QMetaObject::connectSlotsByName(BankingSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *BankingSystemClass)
    {
        BankingSystemClass->setWindowTitle(QApplication::translate("BankingSystemClass", "BankingSystem", 0));
    } // retranslateUi

};

namespace Ui {
    class BankingSystemClass: public Ui_BankingSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKINGSYSTEM_H
