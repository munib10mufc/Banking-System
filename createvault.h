#ifndef CREATEVAULT_H
#define CREATEVAULT_H

#include <QWidget>
#include "ui_createvault.h"
#include "Teller.h"

class VaultSubMenu;
class createVault : public QWidget
{
	Q_OBJECT

public:
	createVault(Teller *t=nullptr,QWidget *parent = 0);
	~createVault();
	int getAccountNo();
	public slots:
		void createVaultPressed();
		void backButtonClicked();

private:
	Ui::createVault ui;
	int AccountId;
	Teller *teller;
	VaultSubMenu *submenu;
};

#endif // CREATEVAULT_H
