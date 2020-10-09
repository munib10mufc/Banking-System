#include "vaultdetail.h"
#include "vaultsubmenu.h"


VaultDetail::VaultDetail(Teller *t,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->teller=t;
}

VaultDetail::~VaultDetail()
{

}

void VaultDetail::backButtonClicked(){
	submenu=new VaultSubMenu(this->teller);
	submenu->show();
	this->close();
}

void VaultDetail::enterButtonClicked(){
    string vNo=ui.vaultnoEdit->text().toStdString();
	if( vNo.size()==0)
	{
		ui.messagelabel->setText("Please Enter The Required Details");
	}
	else{
		int vaultno=stoi(vNo);
		if(teller->getVault(vaultno)){
		ui.messagelabel->setText("Vault Details retrieved Successfully");
	}
	else{
		ui.messagelabel->setText("Cannot retrieve Vault Details ");
	}
	}


}