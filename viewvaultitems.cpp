#include "viewvaultitems.h"
#include "vaultsubmenu.h"
#include "Item.h"
#include <vector>

ViewVaultItems::ViewVaultItems(Teller *t,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->teller=t;

}

ViewVaultItems::~ViewVaultItems()
{

}

void ViewVaultItems::backButtonClicked(){
	submenu=new VaultSubMenu(this->teller);
	submenu->show();
	this->close();
}

void ViewVaultItems::viewButtonClicked(){
	vector<Item*> items=*(teller->getAllVaultItems());
	ui.tableWidget->setRowCount(items.size());
	 int total=items.size();
    for(int row = 0; row < total; row++) {
		Item *i=items[row];
		QString text=QString::fromStdString(i->getName()); 
        QTableWidgetItem *item = new QTableWidgetItem(text);
        ui.tableWidget->setItem(row, 0, item);
    
		text=QString::fromStdString(i->getDescription()); 
        item = new QTableWidgetItem(text);
        ui.tableWidget->setItem(row, 1, item);
    	text=QString::number(i->getWeight()); 
        item = new QTableWidgetItem(text);
        ui.tableWidget->setItem(row, 2, item);
    
		text=QString::number(i->getVaultId()); 
        item = new QTableWidgetItem(text);
        ui.tableWidget->setItem(row, 3, item);
    
    }


}
	 