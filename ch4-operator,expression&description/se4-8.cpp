#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
//a	
	cout << "(a) 2+7<15-6 ";
	if(2+7<15-6)
	{
		cout << "is true." << endl;
	}
	else
	cout << "is false." << endl;
//b	
	cout << "(b) 5-3*6+2=" << 5-3*6+2 << endl;
//c	
	cout << "(c) (12-3)*8+25=" << (12-3)*8+25 << endl;
//d	
	cout << "(d) 16>2 && 8<9 && 2<7 ";
	if(16>2 && 8<9 && 2<7)
	cout << "is true." << endl;
	else
	cout << "is false." << endl;
//e
	cout << "(e) 28>10 || 7<2 ";
	if(28>10 || 7<2)
	cout << "is true." << endl;
	else	
	cout << "is false." << endl;
//f
	cout << "(f) 6<=6";
	if(6<=6)
	cout << "is true." << endl;
//g
	cout << "(g) 5+17>16 ";
	if(5+17>16)
	cout << "is true." << endl;
	else
	cout << "is false." << endl;
//h
	cout << "(h) 21+10*6>53 ";
	if(21+10*6>53)
	cout << "is true." << endl;
	else
	cout << "is false." << endl;
//i
	cout << "(i) 14+6>8 || 32-5>6 ";
	if(14+6>8 || 32-5>6)
	cout << "is true." << endl;
	else
	cout << "is false." << endl;
//j
	cout << "(j) 36>=10";
	if(36>=10)
	cout << "is true." << endl;
	else
	cout << "is false." << endl;
	
	system ("pause");		//pause the program
	return 0;				//reutrn integer 0
}							//end of main block
