#ifndef CHEQUBOOKAPPLICATION_H
#define CHEQUBOOKAPPLICATION_H

#include <QWidget>
#include "ui_chequbookapplication.h"
#include"Teller.h"

class ChequBookApplication : public QWidget
{
	Q_OBJECT

public:
	ChequBookApplication(Teller * t1=nullptr,QWidget *parent = 0);
	~ChequBookApplication();
	void goBack1();
public slots:
	void onApplyclick();
	void Back1();
private:
	Ui::ChequBookApplication ui;
	Teller * t;
};

#endif // CHEQUBOOKAPPLICATION_H
