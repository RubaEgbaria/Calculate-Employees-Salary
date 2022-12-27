//ready
#pragma once 
#include <iostream>
#include <string.h>
using namespace std ; 
class Emp {
protected  :
char * name ;
 int hireYear;
public :
	Emp () { //empty constructor 
		name = " no name " ;
        hireYear =  0 ;
		cout << " Employee's empty constructor is called .. " <<endl;
	}
	Emp ( char * name , int hireYear ) { //constructor 
		this->hireYear = hireYear ; 
		strcpy ( this -> name , name ) ;
		cout << " Employee's constructor is called .. " <<endl; 
	}
	char * Name () { 
		return name ; 
	}
	~Emp () {
		delete [] name ;
		name = NULL ;
		cout << " Employee's Destructor is called !! " << endl ; 
	}
	/*void GetEmp () { 
		cout << name << " works since " << hireYear << " , " << time << " hours everyday .. " << name  << " earn " << hourly << " in one hour ." << endl;
	} */
	virtual double monthlyPay () {
		name = " no name " ;
		hireYear = 0 ; 
	return 0 ;
	}
	virtual double annualPay () {
		name = " no name " ;
		hireYear = 0 ; 
	return 0 ;
	}

};