#include "vaultsubmenu.h"
#include "tellermenu.h"

VaultSubMenu::VaultSubMenu(Teller *t,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->teller=t;
}

VaultSubMenu::~VaultSubMenu()
{

}

void VaultSubMenu::createVaultClicked()
{
	this->creatVault=new createVault(this->teller);
	creatVault->show();
	this->close();
}

void VaultSubMenu::closeVaultClicked(){
	this->closVault=new closeVault(this->teller);
	closVault->show();
	this->close();

}

void VaultSubMenu::addItemClicked(){
	this->addItem=new AddItemToVault(this->teller);
	addItem->show();
	this->close();

}

void VaultSubMenu::viewVaultItemsClicked(){
	this->viewVaultItems=new ViewVaultItems(this->teller);
	viewVaultItems->show();
	this->close();

}

void  VaultSubMenu::vaultDetailsClicked(){
	this->vaultdetails=new VaultDetail(this->teller);
	vaultdetails->show();
	this->close();

}

void VaultSubMenu::retrieveItemClicked(){
	this->retrieveItem=new RetrieveVaultItem(this->teller);
	retrieveItem->show();
	this->close();

}

void VaultSubMenu::backButtonClicked(){
	this->tellerMenu=new TellerMenu(this->teller);
	this->close();
	tellerMenu->show();

}