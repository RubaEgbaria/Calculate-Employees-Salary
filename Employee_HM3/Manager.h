//•	Manager: annual salary + 10% bonus
//#include"employee.h"
#pragma once 
#include "salariedEmp.h"
class manager : public salariedEmp {
public :
manager () { 
	annualSalary = 0 ; 
	name = " no name " ;
	hireYear = 0 ;
}
~manager () { 
	delete [] name ; 
	name = NULL ;
}
manager ( char * name , int hireYear , int annualSalary ) : salariedEmp ( name , hireYear , annualSalary ) { 
     this -> name = name ; 
	 this -> hireYear = hireYear ;
	 this -> annualSalary = annualSalary ;
}
char * Name () { 
		return name ; 
	}
double annualPay ( ) {
	double annually ; 
	annually = annualSalary  ; 
	annually += annually * 0.1 ;
	return annually ;
	}

};