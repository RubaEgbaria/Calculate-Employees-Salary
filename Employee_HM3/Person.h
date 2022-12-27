//Ready 
#include <iostream>
using namespace std ; 
class Person {
private :

protected :
	char * name ;
	long ID ;

public :
	Person () 
	{
		name = " no name " ;
		ID = 0.00 ;
	}
	Person ( char * nname , long nID ) {
		name = new char [ strlen (nname) + 1 ] ;
		strcpy (name,nname) ;
		ID = nID ;
		cout << " person's constructor is called .. " <<endl; 
	}
	~Person () {
		delete [] name ;
		name = NULL ;
		cout << " person's destructor is called .. " <<endl; 
	}

};
