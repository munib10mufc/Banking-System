#ifndef VAULTSUBMENU_H
#define VAULTSUBMENU_H

#include <QWidget>
#include "ui_vaultsubmenu.h"
#include "createvault.h"
#include "closevault.h"
#include "additemtovault.h"
#include "viewvaultitems.h"
#include "Teller.h"
#include "vaultdetail.h"
#include "retrievevaultitem.h"

class TellerMenu; 
class Teller;
class VaultSubMenu : public QWidget
{
	Q_OBJECT

public:
	VaultSubMenu(Teller *t=nullptr,QWidget *parent = 0);
	~VaultSubMenu();
	public slots:
		void createVaultClicked();
		void closeVaultClicked();
		void addItemClicked();
		void viewVaultItemsClicked();
		void vaultDetailsClicked();
		void retrieveItemClicked();
		void backButtonClicked();
private:
	Ui::VaultSubMenu ui;
	Teller *teller;
	createVault *creatVault;
	closeVault *closVault;
	AddItemToVault *addItem;
	ViewVaultItems *viewVaultItems;
	VaultDetail *vaultdetails;
	RetrieveVaultItem *retrieveItem;
	TellerMenu* tellerMenu;
};

#endif // VAULTSUBMENU_H
