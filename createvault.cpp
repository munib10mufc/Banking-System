#include "createvault.h"
#include "Vault.h"
#include "vaultsubmenu.h"

createVault::createVault(Teller *t,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->teller=t;
}

createVault::~createVault()
{

}
void createVault::backButtonClicked(){
	submenu=new VaultSubMenu(this->teller);
	submenu->show();
	this->close();
}

void createVault::createVaultPressed(){
	string aId=ui.accountNoEdit->text().toStdString();
	if(aId.size()==0){
		ui.messagelabel->setText("Please Enter Account No");
		
	}

	else{
	this->AccountId=stoi(aId);

	}
	Vault *newVault=new Vault(0,AccountId,teller->getBranchId());
	if(teller->createVault(newVault)){
		ui.messagelabel->setText("Vault Successfully Created");	
	}
	else{
	    ui.messagelabel->setText("Vault Could Not Be Created");
		
	}

}

int createVault::getAccountNo(){

	return AccountId;
}
