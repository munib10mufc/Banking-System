#include "billpayment.h"
#include"Teller.h"
#include"tellermenu.h"


billPayment::billPayment(Teller* t,QWidget *parent)
	: QWidget(parent)
{
	_teller=t;
	ui.setupUi(this);
}

void billPayment::payClicked(){



	bool wrong=false;
	for(int i=0;i<ui.lineEdit_3->text().toStdString().size();i++){
		if(ui.lineEdit_3->text().toStdString()[i]!='1'&&ui.lineEdit_3->text().toStdString()[i]!='2'&&ui.lineEdit_3->text().toStdString()[i]!='3'&&ui.lineEdit_3->text().toStdString()[i]!='4'&&ui.lineEdit_3->text().toStdString()[i]!='5'&&ui.lineEdit_3->text().toStdString()[i]!='6'&&ui.lineEdit_3->text().toStdString()[i]!='7'&&ui.lineEdit_3->text().toStdString()[i]!='8'&&ui.lineEdit_3->text().toStdString()[i]!='9'&&ui.lineEdit_3->text().toStdString()[i]!='0'){
			wrong=true;
		}
	}

	for(int i=0;i<ui.lineEdit_2->text().toStdString().size();i++){
		if(ui.lineEdit_2->text().toStdString()[i]!='1'&&ui.lineEdit_2->text().toStdString()[i]!='2'&&ui.lineEdit_2->text().toStdString()[i]!='3'&&ui.lineEdit_2->text().toStdString()[i]!='4'&&ui.lineEdit_2->text().toStdString()[i]!='5'&&ui.lineEdit_2->text().toStdString()[i]!='6'&&ui.lineEdit_2->text().toStdString()[i]!='7'&&ui.lineEdit_2->text().toStdString()[i]!='8'&&ui.lineEdit_2->text().toStdString()[i]!='9'&&ui.lineEdit_2->text().toStdString()[i]!='0'){
			wrong=true;
		}
	}

	if(ui.lineEdit_3->text().toInt()<ui.lineEdit_2->text().toInt())
		wrong=true;

	for(int i=0;i<ui.lineEdit_4->text().toStdString().size();i++){
		if(ui.lineEdit_4->text().toStdString()[i]!='1'&&ui.lineEdit_4->text().toStdString()[i]!='2'&&ui.lineEdit_4->text().toStdString()[i]!='3'&&ui.lineEdit_4->text().toStdString()[i]!='4'&&ui.lineEdit_4->text().toStdString()[i]!='5'&&ui.lineEdit_4->text().toStdString()[i]!='6'&&ui.lineEdit_4->text().toStdString()[i]!='7'&&ui.lineEdit_4->text().toStdString()[i]!='8'&&ui.lineEdit_4->text().toStdString()[i]!='9'&&ui.lineEdit_4->text().toStdString()[i]!='0'){
			wrong=true;
		}
	}



	if(ui.lineEdit_2->text().toStdString().size()==0 ||ui.lineEdit_3->text().toStdString().size()==0 || ui.lineEdit->text().toStdString().size()==0 || wrong || ui.lineEdit_4->text().toStdString().size()==0){
		ui.ErrorLabel->setText("Fill Complete Form, BillID and Amounts are in intger and paid amount must be >= due amount");
	}
	else{
		Bill *b = new Bill(ui.lineEdit_4->text().toInt(),ui.lineEdit->text().toStdString(),ui.lineEdit_3->text().toInt(),ui.lineEdit_2->text().toInt());
		if(this->_teller->payBill(b)){
			if(b->getPaidAmount()>b->getBillAmount()){
                ui.ErrorLabel->setText("Bill Payed, Get remaining cash back");
			}
			else
				ui.ErrorLabel->setText("Bill Payed");
	}
	else{
		ui.ErrorLabel->setText("Opreation Failed get Money back");
	}
	}



}

void billPayment::changeForm(){
	TellerMenu * w = new TellerMenu(this->_teller);
	this->close();
	w->show();
}

billPayment::~billPayment()
{

}
