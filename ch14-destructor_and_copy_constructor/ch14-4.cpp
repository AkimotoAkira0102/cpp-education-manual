#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

class CWin{
	private:
		char id, *title;

	public:
		CWin(char i='D', const char *text="Default window"):id(i){
			title = new char[strlen(text)+1];
			strcpy(title,text);
		}
		
		~CWin(){
			cout << "Destructor is called, Wind " << id << " is destoryed." << endl;
			delete [] title;
		}
		
		void show(void){
			cout << "Window " << id << ": " << title << endl;
		}
};

int main(void){
	CWin win1('A',"Main window");
	CWin *ptr;
	ptr = new CWin('B');
	win1.show();
	ptr->show();
	system("pause");	//pause the program
	return 0;
}
