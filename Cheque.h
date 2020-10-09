#ifndef Cheque_H
#define Cheque_H

#include "ChequeBook.h"

class ChequeBook;
class Cheque
{
	int chequeNo;
	bool recieved;
	bool cancelled;
	ChequeBook * chequeBook;

public:
	Cheque(int cn = 0 , bool r = false , bool c = false , ChequeBook * cb = nullptr);
	void setChequeNumber(int cn);
	void setRecieved(bool );
	void setCancelled(bool );
	bool getRecieved();
	bool getCancelled();
	void setChequeBook( ChequeBook * cb = nullptr );
	ChequeBook * getChequeBook();
	
	//void CancelCheck();
	int getChequeNumber();
	~Cheque();



};

#endif