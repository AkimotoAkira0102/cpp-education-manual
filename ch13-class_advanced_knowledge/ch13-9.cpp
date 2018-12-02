#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;
	
	public:
		CWin(char i='D', int w = 100, int h = 100):id(i),width(w),height(h){
			cout << "Constructot is called." << endl;
		}
		
		void show_member(void){
			cout << "Window " << id << " : width = "  << width << ", height = " << height << endl;
		}
};

int main(void){
	CWin win1('A',50,40);
	CWin myWin[3];
	
	win1.show_member();
	myWin[2].show_member();
	system("pause");	//pause the program
	return 0;
}
