#include <iostream>			//include iostream files
#include <cstdlib> 			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int score;
	cin >> score;
	if(score>=80){
		cout << "A class" << endl;
	}
	else{
		if(score<80 && score>=60){
			cout << "B class" << endl;
		}
		else{
			cout << "C class" << endl;
		}
	}
	system("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
