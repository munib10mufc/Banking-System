#ifndef DEPOSITCASH_H
#define DEPOSITCASH_H
#include "Teller.h"

#include <QWidget>
#include "ui_depositcash.h"

class depositCash : public QWidget
{
	Q_OBJECT

public:
	depositCash(Teller * _t , QWidget *parent = 0);
	~depositCash();
	void goBack3();
	public slots:
		void onSubmitButton();
		void Back3();

private:
	Ui::depositCash ui;
	Teller * t;
};

#endif // DEPOSITCASH_H
