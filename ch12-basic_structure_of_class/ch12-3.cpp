#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	public:
		char id;
		int width,height;
};

int main(void){
	CWin win1,win2;
	win1.id = 'A';
	win1.height = 50;
	win1.width = 40;
	
	cout << "Wundow " << win1.id << ":" << endl;
	cout << "win1.height = " << win1.height << endl;
	cout << "win1.width = " << win1.width << endl;
	
	win2.id = 'B';
	win2.height = win1.height + 20;
	win2.width = win1.width + 20;
	cout << "====================" << endl;
	cout << "Wundow " << win2.id << ":" << endl;
	cout << "win2.height = " << win2.height << endl;
	cout << "win2.width = " << win2.width << endl;
	
	system("pause");	//pause the program
	return 0;
}
