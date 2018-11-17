<<<<<<< HEAD
#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int a[5] = {32,16,35,65,52};
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	for(int i=0;i<5;i++){
		cout << "&a[" << i << "] = " << &a[i] << endl;
	}
	system("pause");		//pause the program
	return 0;
}
=======
#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int a[5] = {32,16,35,65,52};
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	for(int i=0;i<5;i++){
		cout << "&a[" << i << "] = " << &a[i] << endl;
	}
	system("pause");		//pause the program
	return 0;
}
>>>>>>> 6bb161d095893fad516c75f2005ab2b2dfbd3d60
