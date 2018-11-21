#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	public:
		char id;
		int width,height;
};

int main(void){
	CWin win1;
	win1.id = 'A';
	win1.height = 50;
	win1.width = 40;
	cout << "Window " << win1.id << ":" << endl;
	cout << "win1.width = " << win1.width << endl;
	cout << "win1.height = " << win1.height << endl;
	system("pause");	//pause the program
	return 0;
}
