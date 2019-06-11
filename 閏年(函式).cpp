#include <iostream>
using namespace std;

bool ( isLeapYear( int y ) ) ;

int main()
{
	int y ;
	
	for( int i=0 ; i<3 ; i++ )
	{
		cin >> y ;
		if( isLeapYear(y))
			cout << "TRUE" << endl ;
		else
			cout << "FALSE" << endl ;
	}
}

bool ( isLeapYear( int y ) )
{
	if( y%400==0 ) return true ;
	if( y%100==0 ) return true ;
	if( y%4==0 ) return true ;
	else return false ;
}
