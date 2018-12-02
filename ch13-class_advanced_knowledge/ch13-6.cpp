#include <iostream> 	//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;
		
	public:
		CWin(char i='D', int w=100, int h=100):id(i),width(w),height(h){
			cout << "Member is be initialized." << endl;
		}
		void show_member(void){
			cout << "Window " << id << ": width = " << width << ", height = " << height << endl;
		}
};

int main(void){
	CWin win1('A',80);
	CWin win2;
	
	win1.show_member();
	win2.show_member();
	
	system("pause");	//pause the program
	return 0;
}
