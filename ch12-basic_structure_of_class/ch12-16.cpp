#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;
	
	public:
		void set_data(char i, int w, int h){
			id = i;
			width = w;
			height = h;
		}
	friend void show_member(CWin);
};

void show_member(CWin w){
	cout << "Window " << w.id;
	cout << ": width = " << w.width;
	cout << ", height = " << w.height << endl;
}

int main(void){
	CWin win1;
	win1.set_data('A',50,40);
	show_member(win1);
	system("pause");	//pause the program
	return 0;
}
