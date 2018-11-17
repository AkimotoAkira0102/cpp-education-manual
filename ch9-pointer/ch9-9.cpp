<<<<<<< HEAD
#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

void swap(int,int);		//declare function prototype

int main(void){			//begining of main block
	int x = 2, y = 5;
	cout << "Before call swap(), x = " << x << ", y = " << y << endl;
	swap(x,y);
	cout << "After call swap(), x = " << x << ", y = " << y << endl;
	system("pause");	//pause the program
	return 0;
}

void swap(int a, int b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	return;
}
=======
#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

void swap(int,int);		//declare function prototype

int main(void){			//begining of main block
	int x = 2, y = 5;
	cout << "Before call swap(), x = " << x << ", y = " << y << endl;
	swap(x,y);
	cout << "After call swap(), x = " << x << ", y = " << y << endl;
	system("pause");	//pause the program
	return 0;
}

void swap(int a, int b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	return;
}
>>>>>>> 6bb161d095893fad516c75f2005ab2b2dfbd3d60
