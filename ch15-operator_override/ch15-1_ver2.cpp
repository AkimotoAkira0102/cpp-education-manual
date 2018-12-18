#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;

	public:
		CWin(char i,int w,int h):id(i),width(w),height(h){
			cout << "Constructor is called." << endl;
		}
		
		int operator>(CWin &win){
			return (this->area() > win.area());
		}
		
		int area(void){
			return width*height;
		}
};

int main(void){
	CWin win1('A',70,80);
	CWin win2('B',60,90);
	
	if(win1.operator>(win2)){		//equal to win1>win2
		cout << "win1 is larger than win2" << endl;
	} else {
		cout << "win2 is larger than win1" << endl;
	}
	system("pause");	//pause the program
	return 0;
}
