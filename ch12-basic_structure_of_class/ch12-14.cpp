#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;
		
	public:
		int area(void){
			return width*height;
		}
		
		void show_area(void){
			cout << "Window " << id << ", area = " << area() << endl;
		}
		
		void set_Data(char x,int y,int z){
			id = x;
			if(y>0 && z>0){
				width = y;
				height = z;	
			} else {
				cout << "Input error." << endl;
			}
		}
		
};

int main(void){
	CWin win1;
	win1.set_Data('A',50,40);
	win1.show_area();
	system("pause");	//pause the program
	return 0;
}
