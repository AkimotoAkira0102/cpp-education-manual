#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

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
		
		void show_member(void){
			cout << "Window " << id << ": " << "wdith = " << width << ", height = " << height << endl;
		}
};

int main(void){
	CWin win1('A',50,40);
	CWin win2(30,20);
	
	win1.show_member();
	win2.show_member();
	system("pause");
	return 0;
}
