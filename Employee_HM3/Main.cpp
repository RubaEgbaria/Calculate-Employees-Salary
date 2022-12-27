#include <iostream>
#include <fstream>
//#include <stdio.h>
#include "FullTime.h"
//#include "hourlyEmp.h"
#include "Manager.h"
#include "PartTime.h"
//#include "salariedEmp.h"
#include "Staff.h"
#include "employee.h"
#pragma warning (disable:4996)
using namespace std ;
void main () {
    char * e = new char [1000] ;
	FILE * fptr = NULL ;
	fptr = fopen ( "EmployeeData.txt" , "r" ) ;
	if ( fptr == NULL ) {
		cout << " invalid " << endl ;
		return ;
	}
	else {
		int count = 0 ; 
		while ( !feof ( fptr ) ) {
		fgets ( e , 100 , fptr ) ;
		count += 1 ;
	  }
	rewind( fptr ) ;
	  int q = 0 ; 
	  char * name = new char [100] ;
      char * emp = new char [100] ;	
      int annualSalary = 0 ; 
	  int hireYear = 0 ; 
	  int hoursPerWeek = 0 ;
	  double hourly = 0.0 ;
	  Emp **e = new Emp * [ count + 2 ] ;
while ( !feof ( fptr ) ) {

	fscanf ( fptr , "%s" , emp);
	 if ( strcmp ( emp , "Staff" ) == 0 ) { 
		     fscanf ( fptr , "%s%d%d" , name , &hireYear , &annualSalary ) ;
		      e[q] = new staff ( name , hireYear , annualSalary ) ;
	            	q++ ;
	}
	 else if ( strcmp ( emp , "Manager" ) == 0 ){
		 fscanf ( fptr , "%s%d%d", name , &hireYear , &annualSalary ) ;
		   e[q] = new manager ( name , hireYear , annualSalary ) ;
		   q++ ;
	}
	 if ( strcmp ( emp , "Parttime" ) == 0) {
           fscanf ( fptr , "%s%d%d%lf" , name , &hireYear , &hoursPerWeek , &hourly) ;
		   e[q] = new PartTime ( name , hireYear , hoursPerWeek , hourly ) ;
			q++ ;
	}
	else if ( strcmp ( emp , "Fulltime" ) == 0 ) {
           fscanf ( fptr , "%s%d%d%lf" , name , &hireYear , &hoursPerWeek , &hourly ) ;
			e[q] = new FullTime ( name , hireYear , hoursPerWeek , hourly ) ;
			q++ ;
	}

}

int i = 0 ; 
for( ; i < count ; i++ ) {

    cout <<  e[i] -> Name() ;
	cout << " monthly pay is :" ;
	cout << e[i] -> monthlyPay() ;
	cout << " annual pay is : " ;
	cout << endl ;
    cout << e[i] -> annualPay() <<endl;
} 
cout << " blah blah .. 2 " <<endl; 
}
	fcloseall () ; 
}