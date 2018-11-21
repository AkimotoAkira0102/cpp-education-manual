#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	public:
		char id;
		int width,height;
		
		int area(void){
			return width*height;
		}
		
		void set_Data(char x, int y, int z){
			id = x;
			width = y;
			height = z;
		}
};

void show_area(CWin win){
	cout << "Window " << win.id << ", area = " << win.area() << endl;
	
}

int main(void){
	CWin win1;
	win1.set_Data('A',50,40);
	show_area(win1);
	system("pause");	//pause the program
	return 0;
}
