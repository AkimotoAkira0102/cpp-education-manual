#include <iostream>				//including iostream files
#include <cstdlib>				//including cstdlib files
using namespace std;			

int main(void){					//begining of main block
	int week;
	cin >> week;
	switch(week){
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		case 7:
			cout << "Sunday" << endl;
			break;
		default:
			cout << "Not Existing." << endl;
			break;
	}
	system("pause");
	return 0;
}
