#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

struct Win{
	char id;
	int width,height;
};

int area(struct Win w){
	return w.height*w.width;
}

int main(void){
	struct Win win1;
	win1.id = 'A';
	win1.height = 50;
	win1.width = 40;
	cout << "Window" << win1.id << ", area = " << area(win1) << endl;
	system("pause");	//pause the program
	return 0;
}
