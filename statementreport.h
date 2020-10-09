#ifndef STATEMENTREPORT_H
#define STATEMENTREPORT_H

#include <QWidget>
#include "ui_statementreport.h"

class StatementReport : public QWidget
{
	Q_OBJECT

public:
	StatementReport(QWidget *parent = 0);
	~StatementReport();

private:
	Ui::StatementReport ui;
};

#endif // STATEMENTREPORT_H
