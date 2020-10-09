/********************************************************************************
** Form generated from reading UI file 'statementreport.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATEMENTREPORT_H
#define UI_STATEMENTREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatementReport
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *StatementReport)
    {
        if (StatementReport->objectName().isEmpty())
            StatementReport->setObjectName(QStringLiteral("StatementReport"));
        StatementReport->resize(709, 474);
        tableWidget = new QTableWidget(StatementReport);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(170, 150, 401, 231));
        QFont font;
        font.setFamily(QStringLiteral("Nyala"));
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/whiteBackground.png);"));
        label = new QLabel(StatementReport);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 80, 281, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        graphicsView = new QGraphicsView(StatementReport);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-145, -109, 871, 591));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        tableWidget->raise();
        label->raise();

        retranslateUi(StatementReport);

        QMetaObject::connectSlotsByName(StatementReport);
    } // setupUi

    void retranslateUi(QWidget *StatementReport)
    {
        StatementReport->setWindowTitle(QApplication::translate("StatementReport", "StatementReport", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("StatementReport", "Account Number", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("StatementReport", "Transaction Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("StatementReport", "Trans. Amount", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("StatementReport", "Date/Time", 0));
        label->setText(QApplication::translate("StatementReport", " Statement Report", 0));
    } // retranslateUi

};

namespace Ui {
    class StatementReport: public Ui_StatementReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATEMENTREPORT_H
