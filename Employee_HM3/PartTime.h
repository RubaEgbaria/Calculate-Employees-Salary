//ready 
// •  PartTime: 50 weeks of wages (no bonus) .. annual 
//#include"employee.h"
#pragma once 
#include "hourlyEmp.h"
class PartTime : public hourlyEmp {
public :
	PartTime () : hourlyEmp () {
	hireYear = hoursPerWeek = 0 ; 
	hourly = 0.0 ; 
	name = " no name " ; 
	}
	~PartTime (){
		//delete [] name ; 
		name = NULL ; 
	}
	PartTime (char * name , int hireYear , int hoursPerWeek , double hourly ) : hourlyEmp ( name , hireYear , hoursPerWeek , hourly ) {
	 this -> name = name ; 
	 this -> hireYear = hireYear ;
	 this -> hoursPerWeek = hoursPerWeek ; 
	 this -> hourly = hourly ;
	}
	char * Name () { 
		return name ; 
	}
double annualPay ( ) {
//	double annually ; 
return 50 * ( hourly * hoursPerWeek ) ; 
//	return annually ;
	}
};