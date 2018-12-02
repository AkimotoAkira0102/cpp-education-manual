#include <iostream> 	//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

class CWin{
	private:
		char id;
		int width,height;
	
	public:
		CWin(char i, int w, int h):id(i),width(w),height(h){}
		
		void show_member(void){
			cout << "window " << id << " : " << "width = " << width << ", height = " << height << endl;
		}
};

int main(void){
	CWin win1('A',50,40);
	CWin win2('B',60,80);
	
	win1.show_member();
	win2.show_member();
	system("pause");	//pause the program
	return 0;
}
