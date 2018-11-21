#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	public:
		char id;
		int width,height;
	
		int area(int x,int y){
			return x*y;
		}
};

int main(void){
	CWin win1;
	win1.id = 'A';
	win1.width = 40;
	win1.height = 50;
	cout << "Window " << win1.id << ":" << endl;
	cout << "Area = " << win1.area(win1.width,win1.height) << endl;
	cout << "sizeof(win1) = " << sizeof(win1) << " bytes" << endl;
	system("pause");	//pause the program
	return 0;
}

