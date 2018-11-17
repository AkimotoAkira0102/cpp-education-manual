#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begininig of main  block
	enum mykey{
		left,right,middle
	} mouse;
	int key;
	do{
		cout << "Button press> (0)Left (1)Right (2)Middle: ";
		cin >> key;
	} while ((key>2)||(key<0));
	mouse = static_cast<mykey>(key);
	cout << static_cast<mykey>(key) << endl;
	switch(mouse){
		case left:
			cout << "Left Button Pressed!" << endl;
			break;
		case right:
			cout << "Right Button Pressed!" << endl;
			break;
		case middle:
			cout << "Middle Button Pressed!" << endl;
			break;
	}
	system("pause");	//pause the program
	return 0;
}
