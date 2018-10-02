#include <iostream>				//including iostream files
#include <cstdlib>				//including cstdlib files
using namespace std;			

int main(void){					//begining of main block
	int month;
	cin >> month;
	switch (month){
		case 1:
		case 2:
			cout << "Winter Vacation" << endl;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			cout << "Lower Semester" << endl;
			break;
		case 7:
		case 8:
			cout << "Summer Vacation" << endl;
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			cout << "Upper Semester" << endl;
			break;
		default:
			cout << "Not Existing." << endl;
			break;
	}
	system("pause");
	return 0;
}
