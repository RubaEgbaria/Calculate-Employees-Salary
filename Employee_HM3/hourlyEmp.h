//ready 
//#include <iostream>
//#include <string.h>
//using namespace std ;
#pragma once 
#include"employee.h"
class hourlyEmp : public Emp {
protected  :
double hourly ;
int hoursPerWeek ;
public : 
 hourlyEmp (char * name , int hireYear , int hoursPerWeek , double hourly ) : Emp ( name , hireYear ) {
	 this -> name = name ; 
	 this -> hireYear = hireYear ;
	 this -> hoursPerWeek = hoursPerWeek ; 
	 this -> hourly = hourly ; 
 }
hourlyEmp() : Emp () { 
	hireYear = hoursPerWeek = 0 ; 
	hourly = 0.0 ; 
	name = " no name " ; 
}
~hourlyEmp() { 
	hourly = hoursPerWeek = 0 ; 
}
char * Name () { 
		return name ; 
	}
double monthlyPay()
{
return ( hourly * hoursPerWeek ) * 4  ; 
}
};