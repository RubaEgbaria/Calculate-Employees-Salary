//ready
//#include <iostream>
//#include <string.h>
//using namespace std ; 
#pragma once 
#include"employee.h"
class salariedEmp : public Emp  {
protected :
int annualSalary ; 
public : 
	salariedEmp () : Emp () { 
	name = " no name " ; 
	hireYear = 0 ; 
	annualSalary = 0 ; 
	}
	~salariedEmp () { 
	annualSalary = 0 ; 
	}
	char * Name () { 
		return name ; 
	}
	salariedEmp (char * name , int hireYear , int annualSalary ) : Emp ( name , hireYear )  {
	 this -> name = name ; 
	 this -> hireYear = hireYear ;
	 this -> annualSalary = annualSalary ; 
	}
double monthlyPay()
{
return annualSalary / 12 ; 
}
};