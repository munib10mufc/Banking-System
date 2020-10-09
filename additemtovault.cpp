#include "additemtovault.h"
#include "vaultsubmenu.h"
#include "Item.h"



AddItemToVault::AddItemToVault(Teller *t,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->teller=t;
}

AddItemToVault::~AddItemToVault()
{

}

void AddItemToVault::backButtonClicked(){
	submenu=new VaultSubMenu(this->teller);
	submenu->show();
	this->close();
}

void AddItemToVault::addItemClicked(){
	
	string vNo=ui.vaultnoEdit->text().toStdString();
	string name=ui.itemnamelineEdit->text().toStdString();
	string desc=ui.deslineEdit->text().toStdString();
	string wei=ui.weilineEdit->text().toStdString();
	if(name.size()==0 || vNo.size()==0 || desc.size()==0 || wei.size()==0)
	{
		ui.messagelabel->setText("Please Enter The Required Details");
	}
	else{
		int vaultno=stoi(vNo);
		double weight=stod(wei);
	Item *newItem=new Item(0,name,desc,weight,vaultno);
	if(teller->addItemToVault(newItem)){
		ui.messagelabel->setText("Item Added Successfully");
	}
	else{
		ui.messagelabel->setText("Could Not Add the Item");
	}
	}
}

