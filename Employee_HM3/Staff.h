// •	Staff: annual salary + 2% bonus per year of service up to 5 years
//#include"employee.h"
#pragma once 
#include "salariedEmp.h"
class staff : public salariedEmp {
public :
staff () { 
	annualSalary = 0 ; 
	name = " no name " ;
	hireYear = 0 ;
}
~staff () { 
	delete [] name ; 
	name = NULL ;
}
staff ( char * name , int hireYear , int annualSalary ) : salariedEmp ( name , hireYear , annualSalary ) { 
     this -> name = name ; 
	 this -> hireYear = hireYear ;
	 this -> annualSalary = annualSalary ;
}
char * Name () { 
		return name ; 
	}
double annualPay () {
	double annually ; 
	int i = 0 ; 
	annually =  annualSalary  ; 
	if ( 2020 > hireYear ) { 
		if ( i > 5 ) 
			annually += (annually * 0.02 ) * i ;
	i++ ;
return annually ;
	} 
	
	else return annually ; 
	}

};