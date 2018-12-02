#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;

	public:
		CWin(char i, int w, int h):id(i),width(w),height(h){}
		
		CWin compare(CWin win){
			if(this->area() >= win.area()){
				return *this;
			} else {
				return win;
			}
		}
	
	int area(void){
		return width*height;
	}

	char get_id(void){
		return id;
	}
};
int main(void){
	CWin win1('A',70,80);
	CWin win2('B',60,90);
	
	cout << (win1.compare(win2)).get_id();
	cout << " is larger." << endl;
	system("pause");	//pause the program
	return 0;
}
