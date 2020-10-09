/********************************************************************************
** Form generated from reading UI file 'guidesign.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDESIGN_H
#define UI_GUIDESIGN_H

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

class Ui_guidesignClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *guidesignClass)
    {
        if (guidesignClass->objectName().isEmpty())
            guidesignClass->setObjectName(QStringLiteral("guidesignClass"));
        guidesignClass->resize(600, 400);
        menuBar = new QMenuBar(guidesignClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        guidesignClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(guidesignClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        guidesignClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(guidesignClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        guidesignClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(guidesignClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        guidesignClass->setStatusBar(statusBar);

        retranslateUi(guidesignClass);

        QMetaObject::connectSlotsByName(guidesignClass);
    } // setupUi

    void retranslateUi(QMainWindow *guidesignClass)
    {
        guidesignClass->setWindowTitle(QApplication::translate("guidesignClass", "guidesign", 0));
    } // retranslateUi

};

namespace Ui {
    class guidesignClass: public Ui_guidesignClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDESIGN_H
