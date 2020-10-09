#ifndef MANAGERMENU_H
#define MANAGERMENU_H

#include <QWidget>
#include "ui_managermenu.h"
#include "Manager.h"
#include <QWidget>
#include"accountsubmenu.h"
#include"vaultsubmenu.h"
#include"makedraft.h"
#include"loanapplication.h"
#include"billpayment.h"
#include"creditcardapplication.h"
#include"atmcardapplication.h"
#include"chequbookapplication.h"
#include"employeeinformation.h"
#include"incentive.h"
#include"login.h"
class PendingLoans;


class ManagerMenu : public QWidget
{
	Q_OBJECT

public:
	ManagerMenu(Manager * m = nullptr , QWidget *parent = 0);
	~ManagerMenu();

	public slots:
	void PendingLoanClicked();
	void  ProvideIncentiveClicked();
	void EmployeeInfoClicked();
	void  AccountDetailClicked();
	void  LogoutClicked();

private:
	Ui::ManagerMenu ui;
	Manager * m;
	PendingLoans * loan;
	EmployeeInformation * emp_info;
	AccountSubMenu * acc;
	incentive * incen;
	Login * l;
};

#endif // MANAGERMENU_H
