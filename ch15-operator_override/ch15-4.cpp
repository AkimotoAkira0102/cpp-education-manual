#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

class CWin{
	private:
		char id,*title;

	public:
		CWin(char i='D',char *text = "Default window"){
			cout << "Constructor is called." << endl;
			id = i;
			title = new char[strlen(text)+1];
			strcpy(title,text);
		}
		
		void show(void){
			cout << "Window " << id << ":" << title << endl;
		}
		
		void set_data(char i,char *text){
			id = i;
			strcpy(title,text);
		}
		
		~CWin(){
			cout << "Destructor is called." << endl;
		}
		
		CWin(const CWin &win){
			id = win.id;
			title = win.title;
		}
};

int main(void){
	CWin win1('A',"Main window");
	CWin win2;
	
	win1.show();
	win2.show();
	cout << endl;
	
	win1 = win2;		//set win1 = win2
	cout << "After setting win1 = win2" << endl;
	win1.show();
	win2.show();
	cout << endl;
	
	win1.set_data('B',"Hello window");
	cout << "After changing win1's data menber" << endl;
	win1.show();
	win2.show();
	system("pause");	//pause the program
	return 0;
}
