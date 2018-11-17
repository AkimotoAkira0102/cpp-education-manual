#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

enum month{
	January,February,March,April,May,June
} six;

int main(void){
	string a[6] = {"January","February","March","April","May","June"};
	for(six=January;six<=June;six=static_cast<month>(six+1)){
		cout << "six(" << six << ") = "  << a[six] << endl;
	}
	system("pause");	//pause the program
	return 0;
}
