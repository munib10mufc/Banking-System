/********************************************************************************
** Form generated from reading UI file 'viewvaultitems.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWVAULTITEMS_H
#define UI_VIEWVAULTITEMS_H

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

class Ui_ViewVaultItems
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QGraphicsView *graphicsView;
    QPushButton *backButton;
    QPushButton *viewButton;

    void setupUi(QWidget *ViewVaultItems)
    {
        if (ViewVaultItems->objectName().isEmpty())
            ViewVaultItems->setObjectName(QStringLiteral("ViewVaultItems"));
        ViewVaultItems->resize(708, 508);
        tableWidget = new QTableWidget(ViewVaultItems);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(150, 130, 401, 261));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/whiteBackground.png);"));
        label = new QLabel(ViewVaultItems);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 80, 181, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        graphicsView = new QGraphicsView(ViewVaultItems);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-110, -90, 921, 701));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        backButton = new QPushButton(ViewVaultItems);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(370, 410, 101, 31));
        viewButton = new QPushButton(ViewVaultItems);
        viewButton->setObjectName(QStringLiteral("viewButton"));
        viewButton->setGeometry(QRect(230, 410, 91, 31));
        graphicsView->raise();
        tableWidget->raise();
        label->raise();
        backButton->raise();
        viewButton->raise();

        retranslateUi(ViewVaultItems);
        QObject::connect(backButton, SIGNAL(clicked()), ViewVaultItems, SLOT(backButtonClicked()));
        QObject::connect(viewButton, SIGNAL(clicked()), ViewVaultItems, SLOT(viewButtonClicked()));

        QMetaObject::connectSlotsByName(ViewVaultItems);
    } // setupUi

    void retranslateUi(QWidget *ViewVaultItems)
    {
        ViewVaultItems->setWindowTitle(QApplication::translate("ViewVaultItems", "ViewVaultItems", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ViewVaultItems", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ViewVaultItems", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ViewVaultItems", "Weight", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ViewVaultItems", "VaultNo", 0));
        label->setText(QApplication::translate("ViewVaultItems", "Vault Items", 0));
        backButton->setText(QApplication::translate("ViewVaultItems", "Back", 0));
        viewButton->setText(QApplication::translate("ViewVaultItems", "View Items", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewVaultItems: public Ui_ViewVaultItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWVAULTITEMS_H
