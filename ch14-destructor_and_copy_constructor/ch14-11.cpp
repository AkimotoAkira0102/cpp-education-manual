#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

class CWin{
	private:
		char id, *title;	

	public:
		CWin(char i='D', char *text="Default window"):id(i){
			cout << "Constructor is called." << endl;
			title = new char[strlen(text)+1];
			strcpy(title,text);
		}
		
		CWin(const CWin &win){
			cout << "Cpoy constructor is called." << endl;
			id = win.id;
			title = new char[strlen(win.title)+1];
			strcpy(title,win.title);
		}
		
		~CWin(){
			delete [] title;
		}
		
		void show(void){
			cout << "Window " << id << ":" << title << endl;
		}
};

void display(CWin win){
	win.show();
}

int main(void){
	CWin *ptr1 = new CWin('A',"Main window");
	
	display(*ptr1);
	display(*ptr1);
	
	delete ptr1;
	system("pause");	//pause the program
	return 0;
}
