/********************************************************************************
** Form generated from reading UI file 'pendingloans.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PENDINGLOANS_H
#define UI_PENDINGLOANS_H

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

class Ui_PendingLoans
{
public:
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLabel *label;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *PendingLoans)
    {
        if (PendingLoans->objectName().isEmpty())
            PendingLoans->setObjectName(QStringLiteral("PendingLoans"));
        PendingLoans->resize(673, 506);
        tableWidget = new QTableWidget(PendingLoans);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 130, 651, 241));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/whiteBackground.png);"));
        label_2 = new QLabel(PendingLoans);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 410, 241, 16));
        label_2->setFont(font);
        label = new QLabel(PendingLoans);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 50, 271, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        graphicsView = new QGraphicsView(PendingLoans);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-65, -119, 851, 661));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton_6 = new QPushButton(PendingLoans);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(430, 410, 101, 41));
        pushButton_7 = new QPushButton(PendingLoans);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(240, 410, 101, 41));
        graphicsView->raise();
        tableWidget->raise();
        label_2->raise();
        label->raise();
        pushButton_6->raise();
        pushButton_7->raise();

        retranslateUi(PendingLoans);
        QObject::connect(pushButton_6, SIGNAL(clicked()), PendingLoans, SLOT(BackClicked()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), PendingLoans, SLOT(onClickView()));

        QMetaObject::connectSlotsByName(PendingLoans);
    } // setupUi

    void retranslateUi(QWidget *PendingLoans)
    {
        PendingLoans->setWindowTitle(QApplication::translate("PendingLoans", "PendingLoans", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PendingLoans", "LoanID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PendingLoans", "AccountNumber", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PendingLoans", "LoanAmount", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PendingLoans", "DueAmount", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PendingLoans", "Issued", 0));
        label_2->setText(QString());
        label->setText(QApplication::translate("PendingLoans", "Loan Information", 0));
        pushButton_6->setText(QApplication::translate("PendingLoans", "Back", 0));
        pushButton_7->setText(QApplication::translate("PendingLoans", "View Info", 0));
    } // retranslateUi

};

namespace Ui {
    class PendingLoans: public Ui_PendingLoans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PENDINGLOANS_H
