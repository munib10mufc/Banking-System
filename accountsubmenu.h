#ifndef ACCOUNTSUBMENU_H
#define ACCOUNTSUBMENU_H

#include <QWidget>
#include "ui_accountsubmenu.h"
#include "Teller.h"
class TellerMenu;
class AccountSubMenu : public QWidget
{
	Q_OBJECT

public:
	AccountSubMenu(Teller * _t = nullptr , QWidget *parent = 0);
	~AccountSubMenu();

	public slots:
	void backButtonClicked();
	void onCreateCurrentAccountClicked();
	void onCreateSavingAccountClicked();
	void onWithdrawCashCLicked();
	void onDepositCashClicked();
	void onAccountDetailsClicked();
	void onTransferMoneyClicked();
	void onModifyAccountClicked();
	void onCloseAccountClicked();

private:
	Ui::AccountSubMenu ui;
	Teller * t;
	TellerMenu* tellerMenu;
};

#endif // ACCOUNTSUBMENU_H
