
#ifndef LoginData_h
#define LoginData_h
#include "Teller.h"
#include "Manager.h"

struct loginData{
	int i;
	Employee * e;

	loginData(){
		i = 0;
		e = nullptr;
	}
};

#endif;