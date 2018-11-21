#include <iostream>		//include iostream files
#include <cstdlib>		//include <cstdlib files
//using namespace std;	//use namespace std

enum sport{
	tennis,swimming,baseball,ski
}favorite = ski;

int main(void){
	std::cout << "favorite =";
	switch(favorite){
		case 0:
			std::cout << "tennis" << std::endl;
			break;
		case 1:
			std::cout << "swimming" << std::endl;
			break;
		case 2:
			std::cout << "baseball" << std::endl;
			break;
		case 3:
			std::cout << "ski" << std::endl;
			break;
	}
	system("pause");	//pause the program
	return 0;
}
