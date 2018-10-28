#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
#include <string>			//include string files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	string str1 = "Hank ";
	string str2 = "Wang ";
	string str3 = ", 2010/12/25";
	cout << "str1=" << str1 << ", str2 = " << str2;
	cout << ", str3=" << str3 << endl;
	cout << "Execute str1.append(str2)" << endl;
	str1.append(str2);
	cout << "str1=" << str1 << endl;
	cout << "Execute str1.append(str3,0,6)" << endl;
	str1.append(str3,0,6);
	cout << "str1=" << str1 << endl;
	cout << "Substring str1 after 5 characters--> " << str1.substr(5) << endl;
	cout << "length of str1 = " << str1.length() << endl;
	system("pause");		//pause the program
	return 0;
}
