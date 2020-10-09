/********************************************************************************
** Form generated from reading UI file 'employeeinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEINFORMATION_H
#define UI_EMPLOYEEINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeInformation
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *EmployeeInformation)
    {
        if (EmployeeInformation->objectName().isEmpty())
            EmployeeInformation->setObjectName(QStringLiteral("EmployeeInformation"));
        EmployeeInformation->resize(871, 587);
        tableWidget = new QTableWidget(EmployeeInformation);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 100, 811, 411));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/whiteBackground.png);"));
        label = new QLabel(EmployeeInformation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 40, 331, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        pushButton = new QPushButton(EmployeeInformation);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 530, 121, 51));
        graphicsView = new QGraphicsView(EmployeeInformation);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(480, 30, 851, 661));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView_2 = new QGraphicsView(EmployeeInformation);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(-10, -20, 901, 701));
        graphicsView_2->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton_2 = new QPushButton(EmployeeInformation);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 530, 121, 51));
        graphicsView->raise();
        graphicsView_2->raise();
        tableWidget->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(EmployeeInformation);
        QObject::connect(pushButton, SIGNAL(clicked()), EmployeeInformation, SLOT(backClicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), EmployeeInformation, SLOT(onViewInfoClicked()));

        QMetaObject::connectSlotsByName(EmployeeInformation);
    } // setupUi

    void retranslateUi(QWidget *EmployeeInformation)
    {
        EmployeeInformation->setWindowTitle(QApplication::translate("EmployeeInformation", "EmployeeInformation", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EmployeeInformation", "EmployeeID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EmployeeInformation", "CNIC", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EmployeeInformation", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EmployeeInformation", "Age", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("EmployeeInformation", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("EmployeeInformation", "Phone", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("EmployeeInformation", "Salary", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("EmployeeInformation", "ManagerID", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("EmployeeInformation", "WorkingBranch", 0));
        label->setText(QApplication::translate("EmployeeInformation", "Employee Information", 0));
        pushButton->setText(QApplication::translate("EmployeeInformation", "Back", 0));
        pushButton_2->setText(QApplication::translate("EmployeeInformation", "View Info", 0));
    } // retranslateUi

};

namespace Ui {
    class EmployeeInformation: public Ui_EmployeeInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFORMATION_H
