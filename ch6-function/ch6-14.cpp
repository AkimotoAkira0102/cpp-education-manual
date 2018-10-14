#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int fact(int);				//declare function prototype

int main(void){				//begining of main block
	int num;
//	extern int time;
	do{
		cout << "Please enter an integer:" ;
		cin >> num;	
	} while(num<=0);
	cout << num <<"!=" << fact(num) << endl;
	system("pause");		//pause the program
	return 0;
}

//int time = 1;
int fact(int x){			//recursive function
//	cout << "run " << time << endl;
//	time++;
	if(x>0){
		return x*fact(x-1);
	} else {
		return 1;
	}
}
