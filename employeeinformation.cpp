#include "employeeinformation.h"
#include "managermenu.h"
#include "Manager.h"

EmployeeInformation::EmployeeInformation( Manager * _m , QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	m = _m;
}

EmployeeInformation::~EmployeeInformation()
{

}


void EmployeeInformation::backClicked(){

	ManagerMenu * w = new ManagerMenu( m);
	w->show();
	this->close();
}

void EmployeeInformation::onViewInfoClicked(){
	vector<Employee *> items = *( m->getEmployeeInformation());
	ui.tableWidget->setRowCount(items.size());
	int total = items.size();
	for (int row = 0; row < total; row++) {
		Employee * i = items[row];
		QString text = QString::number(i->getId());
		QTableWidgetItem *item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 0, item);

		text = QString::fromStdString(i->getCNIC());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 1, item);
		text = QString::fromStdString(i->getName());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 2, item);

		text = QString::number(i->getAge());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 3, item);


		text = QString::fromStdString(i->getAddress());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 4, item);

		text = QString::fromStdString(i->getPhoneNo());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 5, item);


		text = QString::number(i->getSalary());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 6, item);

		text = QString::number(i->getManagerID());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 7, item);

		text = QString::number(i->getBranchId());
		item = new QTableWidgetItem(text);
		ui.tableWidget->setItem(row, 8, item);

	}
}