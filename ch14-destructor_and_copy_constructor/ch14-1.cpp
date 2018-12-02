#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;
		
	public:
		CWin(char i, int w, int h):id(i),width(w),height(h){
			cout << "Constructor is called." << endl;
		}
		
		~CWin(){
			cout << "Destructor is called, win " << this->id << "is destroyed." << endl;
			system("pause");
		}
		
		void show_member(void){
			cout << "Window " << id << " : width = " << width << ", height = " << height << endl;
		}
};

int main(void){
	CWin win1('A',50,40);
	CWin win2('B',40,50);
	CWin win3('C',60,70);
	CWin win4('D',90,40);
	
	win1.show_member();
	win2.show_member();
	win3.show_member();
	win4.show_member();
	system("pause");	//pause the program
	return 0;
}
