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
			cout << "operator>(CWin &win) is called" << endl;
			return this->area() > win.area();
		}
		
		int operator>(const int &var){
			cout << "operator>(const int &var) is called" << endl;
			return this->area() > var;
		}
		
		int area(void){
			return width*height;
		}
};


int operator>(const int &var,CWin &win){
	cout << "operator>(const int &var,CWin &win) is called" << endl;
	return var > win.area();
}
		

int main(void){
	CWin win1('A',70,80);
	CWin win2('B',60,70);
	
	if(win1 > win2){
		cout << "win1 is larger than win2" << endl;
	} else {
		cout << "win1 is smaller than win2" << endl;
	}
	
	if(win1 > 7000){
		cout << "win1 is larger than 7000" << endl;
	} else {
		cout << "win1 is smaller than 7000" << endl;
	}
	
	if(4500 > win2){
		cout << "4500 is larger than win2" << endl;
	} else {
		cout << "4500 is smaller than win2" << endl;
	}
	system("pause");	//pause the program
	return 0;
}
