#include "managermenu.h"
#include"pendingloans.h"

ManagerMenu::ManagerMenu(Manager * _m , QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->m = _m;
}

ManagerMenu::~ManagerMenu()
{

}

void ManagerMenu:: PendingLoanClicked()
{
	this->loan = new PendingLoans(m);
	loan->show();
	this->close();
}

void ManagerMenu::ProvideIncentiveClicked()
{
	this->incen = new incentive(m);
	incen->show();
	this->close();
	
}

void ManagerMenu::EmployeeInfoClicked()
{
	this->emp_info = new EmployeeInformation(m);
	emp_info->show();
	this->close();
}

void ManagerMenu:: AccountDetailClicked()
{
	this->acc = new AccountSubMenu();
	acc->show();
	this->close();

}

void ManagerMenu:: LogoutClicked()
{
	this->l = new Login();
	l->show();
	this->close();


}

