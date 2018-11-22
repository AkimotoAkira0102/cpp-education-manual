#include <iostream> 	//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	public:
		char id;
		int width,height;
		
		int area(void){
			return width*height;
		}
		
		void show_area(void){
			cout << "Window " << id << ", area = " << area() << endl;
		}
		void set_Data(char x, int y, int z){
			id = x;
			width = y;
			height = z;
		}
		void set_Data(int y, int z){
			width = y;
			height = z;
		}
};

int main(void){
	CWin win1,win2;
	win1.set_Data('A',50,40);
	win2.id = 'B';
	win2.set_Data(40,30);
	win1.show_area();
	win2.show_area();
	system("pause");	//pause the program
	return 0;
}
