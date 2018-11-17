<<<<<<< HEAD
#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int a1 = 100, *ptri;
	double a2 = 3.2, *ptrf;
	ptri = &a1;
	ptrf = &a2;
	cout << "sizeof(a1) = " << sizeof(a1) << endl;
	cout << "sizeof(a2) = " << sizeof(a2) << endl;
	cout << "a1 = " << a1 << ", *ptri = " << *ptri << endl;
	cout << "a2 = " << a2 << ", *ptrf = " << *ptrf << endl;
	system("pause");		//pause the program
	return 0;
}
=======
#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int a1 = 100, *ptri;
	double a2 = 3.2, *ptrf;
	ptri = &a1;
	ptrf = &a2;
	cout << "sizeof(a1) = " << sizeof(a1) << endl;
	cout << "sizeof(a2) = " << sizeof(a2) << endl;
	cout << "a1 = " << a1 << ", *ptri = " << *ptri << endl;
	cout << "a2 = " << a2 << ", *ptrf = " << *ptrf << endl;
	system("pause");		//pause the program
	return 0;
}
>>>>>>> 6bb161d095893fad516c75f2005ab2b2dfbd3d60
