#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	public:
		char id;
		int width,height;
		
		int area(){
			return width*height;
		}
		
		int perimeter(){
			return 2*(width + height);
		}
};

int main(void){
	CWin win1;
	win1.id = 'A';
	win1.width = 50;
	win1.height = 40;
	cout << "Window " << win1.id << ":" << endl;
	cout << "Area = " << win1.area() << endl;
	cout << "Perimeter = " << win1.perimeter() << endl;
	system("pause");	//pause the program
	return 0;
}
