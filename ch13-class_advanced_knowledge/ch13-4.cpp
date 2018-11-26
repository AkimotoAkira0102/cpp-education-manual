#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;	
	public:
		CWin(char i, int w, int h){
			id = i;
			width = w;
			height = h;
			cout << "CWin(char,int,int) is called." << endl;
		}
		
		CWin(int w, int h){
			id = 'Z';
			width = w;
			height = h;
			cout << "CWin(int,int) is called." << endl;
		}
		
		CWin(){
			id = 'D';
			width = 100;
			height = 100;
			cout << "CWin() is called." << endl;
		}
		
		void show_member(void){
			cout << "Windod " << id << ": width = " << width << ", height = " << height << endl;
		}
};

int main(void){
	CWin win1('A',50,40);
	CWin win2(30,20);
	CWin win3;
	
	win1.show_member();
	win2.show_member();
	win3.show_member();
	system("pause");	//pause the program
	return 0;
}
