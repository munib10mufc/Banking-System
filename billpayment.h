#ifndef BILLPAYMENT_H
#define BILLPAYMENT_H
class Teller;
#include <QWidget>
#include"Bill.h"
#include "ui_billpayment.h"

class billPayment : public QWidget
{
	Q_OBJECT

public:
	billPayment(Teller* ,QWidget *parent = 0);
	~billPayment();
public slots:
	void payClicked();
	void changeForm(); 


private:
	Ui::billPayment ui;
	Teller* _teller;
};

#endif // BILLPAYMENT_H
