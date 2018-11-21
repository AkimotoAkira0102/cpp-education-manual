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
		
		int show_area(void){
			cout << "Window " << id << ", area = " << area() << endl;
		}
};

int main(void){
	CWin win1;
	win1.id = 'A';
	win1.width = 50;
	win1.height = 40;
	win1.show_area();
	system("pause");	//pause the program
	return 0;
}
