#include "closevault.h"
#include "Vault.h"
#include "vaultsubmenu.h"


closeVault::closeVault(Teller *t,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->teller=t;
}

closeVault::~closeVault()
{

}
void closeVault::backButtonClicked(){
	submenu=new VaultSubMenu(this->teller);
	submenu->show();
	this->close();
}

void closeVault::closeVaultClicked(){
	string aNo=ui.accountNoEdit->text().toStdString();
	string vNo=ui.vaultNoEdit->text().toStdString();
	if(aNo.size()==0 || vNo.size()==0)
	{
		ui.messagelabel->setText("Please Enter The Required Details");
	}
	else{
		int vaultno=stoi(vNo);
		int accountno=stoi(aNo);
	Vault *close=new Vault(vaultno,accountno,0);
	if(teller->closeVault(close)){
		ui.messagelabel->setText("Vault Closed Successfully");
	}
	else{
		ui.messagelabel->setText("Cannot Close this Vault");
	}
	}
}