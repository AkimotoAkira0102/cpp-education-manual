#include <iostream> 	//include iostream files
#include <cstdlib>		//include cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

class CWin{
	private:
		char id, *title;

	public:
		CWin(char i='D',char *text = "Default window"):id(i){
			cout << "Constructor is called." << endl;
			title = new char[strlen(text)+1];
			strcpy(title,text);
		}
		
		void set_data(char i,char *text){
			id = i;
			strcpy(title,text);
		}
		
		void show(void){
			cout << "Window " << id << ":" << title << endl;
		}
		
		void operator=(const CWin &win){
			id = win.id;
			strcpy(this->title,win.title);
		}
		
		CWin(const CWin &win){
			cout << "Copy constructor is called." << endl;
			id = win.id;
			strcpy(title,win.title);
		}
		
		~CWin(){
			cout << "Destructor is called." <<endl;
			delete [] title;
		}
};

int main(void){
	CWin win1('A',"Main window");
	CWin win2;
	
	win1.show();
	win2.show();
	cout << endl;
	
	win1 = win2;
	cout << "After setting win1 = win2" << endl;
	win1.show();
	win2.show();
	cout << endl;
	
	win1.set_data('B',"Hello window");
	cout << "After changine win1's data member" << endl;
	win1.show();
	win2.show();
	system("pause");	//pause the program
	return 0;
}
