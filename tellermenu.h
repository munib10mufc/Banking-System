#ifndef TELLERMENU_H
#define TELLERMENU_H

#include <QWidget>
#include "ui_tellermenu.h"
#include"accountsubmenu.h"
#include"vaultsubmenu.h"
#include"loanapplication.h"
#include"billpayment.h"
#include"creditcardapplication.h"
#include"atmcardapplication.h"
#include"chequbookapplication.h"
#include"Teller.h"
#include "makedraft.h"
class Login;
class TellerMenu : public QWidget
{
	Q_OBJECT

public:
	TellerMenu(Teller * t = nullptr , QWidget *parent = 0);
	~TellerMenu();
	public slots:
		void accountOptionClicked();
		void vaultOptionsClicked();
		void makeCashDraft();
		void applyLoanClicked();
		void billPaymentClicked();
		void creditCardOptionClicked();
		void atmCardOptionClicked();
		void chequeBookOptionClicked();
		void logout();

private:
	Ui::TellerMenu ui;
	AccountSubMenu* accMenue;
	VaultSubMenu* vault;
	makeDraft* draft;
	LoanApplication* loan;
	billPayment* bill;
	CreditCardApplication* cardApp;
	AtmCardApplication* atmCardApp;
	ChequBookApplication* chequeBookAPP;
	Teller * teller;
};

#endif // TELLERMENU_H
