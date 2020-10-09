#ifndef CLOSEVAULT_H
#define CLOSEVAULT_H

#include <QWidget>
#include "ui_closevault.h"
#include "Teller.h"

class VaultSubMenu;
class closeVault : public QWidget
{
	Q_OBJECT

public:
	closeVault(Teller *t=nullptr,QWidget *parent = 0);
	~closeVault();
	public slots:
		void closeVaultClicked();
		void backButtonClicked();

private:
	Ui::closeVault ui;
	Teller *teller;
	VaultSubMenu *submenu;

};

#endif // CLOSEVAULT_H
