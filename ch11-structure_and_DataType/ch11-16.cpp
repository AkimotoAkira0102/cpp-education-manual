#include <iostream>		//include iostream files
#include <cstdlib>		//include <cstdlib files
using namespace std;	//use namespace std

enum sport{
	tennis,swimming,baseball,ski
}favorite = ski;

int main(void){
	cout << "favorite =";
	switch(favorite){
		case 0:
			cout << "tennis" << endl;
			break;
		case 1:
			cout << "swimming" << endl;
			break;
		case 2:
			cout << "baseball" << endl;
			break;
		case 3:
			cout << "ski" << endl;
			break;
	}
	system("pause");	//pause the program
	return 0;
}
