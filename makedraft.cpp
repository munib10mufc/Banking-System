#include "makedraft.h"
#include"Teller.h"
#include"tellermenu.h"

makeDraft::makeDraft(Teller* t,QWidget *parent)
	: QWidget(parent)
{
	this->_teller=t;
	ui.setupUi(this);
}

void makeDraft::changeForm(){
	TellerMenu * w = new TellerMenu(this->_teller);
	this->close();
	w->show();
}
void makeDraft::makeDraftClicked(){
	bool wrong=false;
	for(int i=0;i<ui.lineEdit_3->text().toStdString().size();i++){
		if(ui.lineEdit_3->text().toStdString()[i]!='1'&&ui.lineEdit_3->text().toStdString()[i]!='2'&&ui.lineEdit_3->text().toStdString()[i]!='3'&&ui.lineEdit_3->text().toStdString()[i]!='4'&&ui.lineEdit_3->text().toStdString()[i]!='5'&&ui.lineEdit_3->text().toStdString()[i]!='6'&&ui.lineEdit_3->text().toStdString()[i]!='7'&&ui.lineEdit_3->text().toStdString()[i]!='8'&&ui.lineEdit_3->text().toStdString()[i]!='9'&&ui.lineEdit_3->text().toStdString()[i]!='0'){
			wrong=true;
		}
	}

	for(int i=0;i<ui.amountLineEdit->text().toStdString().size();i++){
		if(ui.amountLineEdit->text().toStdString()[i]!='1'&&ui.amountLineEdit->text().toStdString()[i]!='2'&&ui.amountLineEdit->text().toStdString()[i]!='3'&&ui.amountLineEdit->text().toStdString()[i]!='4'&&ui.amountLineEdit->text().toStdString()[i]!='5'&&ui.amountLineEdit->text().toStdString()[i]!='6'&&ui.amountLineEdit->text().toStdString()[i]!='7'&&ui.amountLineEdit->text().toStdString()[i]!='8'&&ui.amountLineEdit->text().toStdString()[i]!='9'&&ui.amountLineEdit->text().toStdString()[i]!='0'){
			wrong=true;
		}
	}



	if(ui.lineEdit_2->text().toStdString().size()==0 ||ui.lineEdit_3->text().toStdString().size()==0 || ui.lineEdit->text().toStdString().size()==0 || wrong){
		ui.ErrorLabel->setText("Fill Complete Form DraftID and Amount is intger");
	}
	else{
	Draft* d = new Draft();
	d->setAmount(ui.amountLabel->text().toInt());
	d->setDraftID(ui.lineEdit_3->text().toInt());
	d->setReciever(ui.lineEdit_2->text().toStdString());
	d->setRevieved(false);
	d->setSender(ui.lineEdit->text().toStdString());
	if(this->_teller->makeDraft(d)){
		ui.ErrorLabel->setText("Draft created Successfully");
	}
	else{
		ui.ErrorLabel->setText("Opreation Failed");
	}
	}
}

makeDraft::~makeDraft()
{

}
