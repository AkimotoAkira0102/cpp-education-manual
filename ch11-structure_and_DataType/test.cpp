#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
//using namespace std;	//use namespace std

enum mykey{
	left,right,middle
} mouse;

int main(void){			//begininig of main  block
	int key;
	do{
		std::cout << "Button press> (0)Left (1)Right (2)Middle: ";
		std::cin >> key;
	} while ((key>2)||(key<0));
	mouse = static_cast<mykey>(key);
	std::cout << static_cast<mykey>(key) << std::endl;
	switch(mouse){
		case left:
			std::cout << "Left Button Pressed!" << std::endl;
			break;
		case right:
			std::cout << "Right Button Pressed!" << std::endl;
			break;
		case middle:
			std::cout << "Middle Button Pressed!" << std::endl;
			break;
	}
	system("pause");	//pause the program
	return 0;
}
