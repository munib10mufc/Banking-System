#ifndef BANKSTATEMENT_H
#define BANKSTATEMENT_H

#include <QWidget>
#include "ui_bankstatement.h"

class bankStatement : public QWidget
{
	Q_OBJECT

public:
	bankStatement(QWidget *parent = 0);
	~bankStatement();

private:
	Ui::bankStatement ui;
};

#endif // BANKSTATEMENT_H
