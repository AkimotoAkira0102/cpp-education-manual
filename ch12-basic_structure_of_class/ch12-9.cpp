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
		
		int show_area(){
			cout << "Window " << id << ", area = " << area() << endl;
		}
		void set_Data(char x , int y, int z){
			id = x;
			width = y;
			height = z;
		}
};

int main(void){
	CWin win1;
	win1.set_Data('A',50,40);
	win1.show_area();
	system("pause");	//pause the program
	return 0;
}
