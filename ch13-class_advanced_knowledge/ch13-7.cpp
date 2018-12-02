#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;

	public:
		CWin(char i='D', int w=100, int h=100):id(i),width(w),height(h){
			
		}
		
		int area(void){
			return width*height;
		}
		
		void compare(CWin win){
			if(this->area() > win.area()){
				cout << "Window " << this->id << " is larger." << endl;
			} else {
				cout << "Window " << win.id << " is larger." << endl;
			}
		}
};

int main(void){
	CWin win1('A',70,80);
	CWin win2('B',60,90);
	win1.compare(win2);
	
	system("pause");	//pause the program
	return 0;
}
