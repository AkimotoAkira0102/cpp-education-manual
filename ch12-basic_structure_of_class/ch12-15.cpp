#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;
		
		int area(void){
			return width*height;
		}
		
	public:
		void show_area(void){
			cout << "Window " << id << ", area = " << area() << endl;
		}
		
		void set_data(char i, int w, int h){
			id = i;
			if(w > 0 && h > 0){
				width = w;
				height = h;
			} else {
				cout << "Input error." << endl;
			}
		}
};

int main(void){
	CWin win1;
	
	win1.set_data('A',50,40);
	win1.show_area();
	system("pause");	//pause the program
	return 0;
}
