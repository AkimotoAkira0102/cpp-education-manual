#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	public:
		char id;
		int width,height;
};

int main(void){			//begining of main block
	CWin win1;
	cout << "sizeof(win1) = " << sizeof(win1) << " bytes" << endl;
	cout << "sizeof(CWin) = " << sizeof(CWin) << " bytes" << endl;
	system("pause");	//pause the program
	return 0;
}
