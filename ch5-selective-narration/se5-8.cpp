#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main (void){		//begining of main block
	int month;			//declaring month is a integer
	cout << "What minth is it? ";
	cin >> month;
	if(month==3 || month==4 || month==5)
		cout << "Spring" << endl;
	else
		if(month==6 || month==7 || month==8)
			cout << "Summer" << endl;
		else
			if(month==9 || month==10 || month==11)
				cout << "Autumn" << endl;
			else
				if(month==12 || month==1 || month==2)
					cout << "Winter" << endl;
				else
					cout << "Error" << endl;
	system("pause");
	return 0;
}						//end of main block
