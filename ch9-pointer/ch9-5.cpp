<<<<<<< HEAD
#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int a = 5, b = 10;
	int *ptr1,*ptr2;
	cout << "=======After declaration=======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
//	cout << ", *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
//	cout << ", ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	ptr1 = &a;
	cout << "=======After ptr1 = &a =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", ptr1 = " << ptr1 << endl;
	system("pause");
	ptr2 = &b;
	cout << "=======After ptr1 = &b =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	*ptr1 = 7;
	cout << "=======After *ptr1 = 7 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	*ptr2 = 32;
	cout << "=======After *ptr2 = &32 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << ", *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << ", ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	a = 17;
	cout << "=======After a = 17 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	ptr1  = ptr2;
	cout << "=======After ptr1 = ptr2 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	*ptr1 = 9;
	cout << "=======After *ptr1 = 9 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	ptr1 = &a;
	cout << "=======After ptr1 = &a =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	a = 64;
	cout << "=======After a = 64 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	*ptr2 = *ptr1 + 5;
	cout << "=======After *ptr2 = *ptr2 + 5 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	ptr2 = &a;
	cout << "=======After ptr2 = &a =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");	//pause the program
	return 0;
}
=======
#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int a = 5, b = 10;
	int *ptr1,*ptr2;
	cout << "=======After declaration=======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
//	cout << ", *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
//	cout << ", ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	ptr1 = &a;
	cout << "=======After ptr1 = &a =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", ptr1 = " << ptr1 << endl;
	system("pause");
	ptr2 = &b;
	cout << "=======After ptr1 = &b =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	*ptr1 = 7;
	cout << "=======After *ptr1 = 7 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	*ptr2 = 32;
	cout << "=======After *ptr2 = &32 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << ", *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << ", ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	a = 17;
	cout << "=======After a = 17 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	ptr1  = ptr2;
	cout << "=======After ptr1 = ptr2 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	*ptr1 = 9;
	cout << "=======After *ptr1 = 9 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	ptr1 = &a;
	cout << "=======After ptr1 = &a =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	a = 64;
	cout << "=======After a = 64 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	*ptr2 = *ptr1 + 5;
	cout << "=======After *ptr2 = *ptr2 + 5 =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");
	ptr2 = &a;
	cout << "=======After ptr2 = &a =======" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "*ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	system("pause");	//pause the program
	return 0;
}
>>>>>>> 6bb161d095893fad516c75f2005ab2b2dfbd3d60
