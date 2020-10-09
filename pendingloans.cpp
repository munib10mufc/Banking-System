#include "pendingloans.h"

PendingLoans::PendingLoans(Manager *  _m , QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//m = _m;
}

PendingLoans::~PendingLoans()
{

}

void PendingLoans::BackClicked()
{
	ManagerMenu * w = new ManagerMenu(m);
	w->show();
	this->close();
}


void PendingLoans::onClickView(){

	vector<BankLoan *> items = *(m->getLoans());
	ui.tableWidget->setRowCount(items.size());
	int total = items.size();
	for (int row = 0; row < total; row++) {
		BankLoan * i = items[row];
		QString text = QString::number(i->getLoanID());
		QTableWidgetItem *item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 0, item);

		text = QString::number(i->getAccountID());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 1, item);

		text = QString::number(i->getLoanAmount());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 2, item);

		text = QString::number(i->getDueAmount());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 3, item);


		text = QString::number(i->getIsIssued());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 4, item);

	}
}
