#ifndef MAKEDRAFT_H
#define MAKEDRAFT_H

#include <QWidget>
#include "ui_makedraft.h"
class Teller;
class TellerMenu;
#include"Draft.h"
class makeDraft : public QWidget
{
	Q_OBJECT

public:
	makeDraft(Teller* t,QWidget *parent = 0);
	
	~makeDraft();
	public slots:
		void makeDraftClicked();
		void changeForm();

private:
	Ui::makeDraft ui;
	Teller* _teller;

};

#endif // MAKEDRAFT_H
