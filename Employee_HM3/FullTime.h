//ready
// •	FullTime: 50 weeks of wages + 2 weeks wages as bonus .. annual
//#include"employee.h"
#pragma once 
#include "hourlyEmp.h"
class FullTime : public hourlyEmp {
public :
	FullTime () : hourlyEmp () { 
	name = " no name " ;
	hireYear = hoursPerWeek = 0 ; 
	hourly = 0.0 ; 
	} 
	FullTime ( char * name , int hireYear , int hoursPerWeek , double hourly ) : hourlyEmp (name , hireYear , hoursPerWeek , hourly ){ 
	 this -> name = name ; 
	 this -> hireYear = hireYear ;
	 this -> hoursPerWeek = hoursPerWeek ; 
	 this -> hourly = hourly ;	
	} 
	~FullTime () {
	delete [] name ;
	name = NULL ; 
	}
	char * Name () { 
		return name ; 
	}
double annualPay () {
	//double annually ; 
	return 52 * ( hourly * hoursPerWeek ) ; 
	//return annually ;
	}
};