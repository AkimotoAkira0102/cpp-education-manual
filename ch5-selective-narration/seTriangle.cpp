#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int x;
	cin >> x;
	
	//first kind of trianle
	for(int i=1;i<=x;i++){
		for(int star=1;star<=i;star++){
			cout << "*";
		}
		for(int space=x;space>i;space--){
			cout << " ";
		}
		cout << endl;
	}

	//dividing line
	for(int line=1;line<=10;line++){
		cout << "-";
	} 
	cout << endl;
 
 	//second kind of triangle
	for(int i=1;i<=x;i++){
		for(int space=1;space<i;space++){
			cout << " ";
		}
		for(int star=x;star>=i;star--){
			cout << "*";
		}
		cout << endl;
	}
	
	//dividing line
	for(int line=1;line<=10;line++){
		cout << "-";
	} 
	cout << endl;
	
	//Third kind of triangle
	for(int i=x;i>0;i--){
		for(int star=i;star>0;star--){
			cout << "*";
		}
		for(int space=x;space>i;space--){
			cout << " ";
		}
		cout << endl;
	}
	
	//dividing line
	for(int line=1;line<=10;line++){
		cout << "-";
	} 
	cout << endl;
	
	//fourth kind of triangle
	for(int i=x;i>0;i--){
		for(int space=i;space>1;space--){
			cout << " ";
		}
		for(int star=x;star>=i;star--){
			cout << "*";
		}
		cout << endl;
	}

	system("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
