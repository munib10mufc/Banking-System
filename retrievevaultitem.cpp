#include "retrievevaultitem.h"
#include "vaultsubmenu.h"



RetrieveVaultItem::RetrieveVaultItem(Teller *t,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->teller=t;
}

RetrieveVaultItem::~RetrieveVaultItem()
{

}

void RetrieveVaultItem::retrieveButtonClicked(){
	string aNo=ui.accountEdit->text().toStdString();
	string itemId=ui.itemIdEdit->text().toStdString();
	string vNo=ui.vaultIdEdit->text().toStdString();
	if(aNo.size()==0 || itemId.size()==0 || vNo.size()==0 )
	{
		ui.messagelabel->setText("Please Enter The Required Details");
	}
	else{
		int vaultno=stoi(vNo);
		int itemid=stoi(itemId);
		if(teller->retrieveItem(itemid,vaultno)){
		ui.messagelabel->setText("Item Retreived Successfully");
	}
	else{
		ui.messagelabel->setText("Could Not Retrieve the Item");
	}
	}


}

void RetrieveVaultItem::backButtonClicked(){
	submenu=new VaultSubMenu(this->teller);
	submenu->show();
	this->close();
}
