#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;

	public:
		CWin(char i='C',int w=0,int h=0):id(i),width(w),height(h){
			cout << "Constructor is called." << endl;
		}
		
		CWin operator+(CWin &win){
			int w,h;
			w = this->width > win.width ? this->width : win.width;
			h = this->height > win.height ? this->height : win.height;
			return CWin('C',w,h);
		}
		
		void show_member(void){
			cout << "Window " << id << ": width = " << width << ", height = " << height << endl;
		}
};

int main(void){
	CWin win1('A',70,80);
	CWin win2('B',60,90);
	CWin win3;
	
	win3 = win1 + win2;
	win3.show_member();
	system("pause");	//pause the program
	return 0;
}
