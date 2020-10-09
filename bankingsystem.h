#ifndef BANKINGSYSTEM_H
#define BANKINGSYSTEM_H

#include <QtWidgets/QMainWindow>
#include "ui_bankingsystem.h"

class BankingSystem : public QMainWindow
{
	Q_OBJECT

public:
	BankingSystem(QWidget *parent = 0);
	~BankingSystem();

private:
	Ui::BankingSystemClass ui;
};

#endif // BANKINGSYSTEM_H
