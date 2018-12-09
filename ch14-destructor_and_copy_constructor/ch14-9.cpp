#include <iostream>		//inclde iosream files
#include <cstdlib>		//include cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

class CWin{
	private:
		char id, *title;

	public:
		CWin(char i='D', char *text = "Default window"):id(i){
			cout << "Constructor is called." << endl;
			title = new char[strlen(text)+1];
			strcpy(title,text);
		}
		
		CWin(const CWin &win){
			cout << "Copy constructor is called." << endl;
			id = win.id;
			title = new char[strlen(win.title)+1];
			strcpy(title,win.title);
		}
		
		~CWin(){
			cout << "Destructor is called." << endl;
			delete [] title;
		}
		
		void show(void){
			cout << "Window " << id << ":" << title << endl;
		}
};

int main(void){
	CWin *ptr1 = new CWin('A', "Main window");
	CWin *ptr2 = new CWin(*ptr1);
	
	ptr1->show();
	ptr2->show();
	
	delete ptr1;
	cout << "After delete object which ptr1 orient." << endl;
	ptr2->show();
	system("pause");	//pause the program
	return 0;
}
