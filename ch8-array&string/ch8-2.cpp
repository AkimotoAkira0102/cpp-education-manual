#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std
int main(void){				//begining of main block
	int i,a[]={15,6,8};
	int length=sizeof(a)/sizeof(int);
	for(i=0;i<length;i++){
		cout << "a[" << i << "] = " << a[i];
		if(i!=length-1){
			cout  << ",";
		}
	}
	cout << endl << "array a has " << length << " elements." << endl;
	system("pause");		//pause the program
	return 0;
}
