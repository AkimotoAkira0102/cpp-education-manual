#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std
int main(void){				//begining of main block
	int A[] = {48,75,30,17,62};
	int min = A[0],max = A[0];
	int length = sizeof(A)/sizeof(int);
	cout << "Elements in array A are ";
	for(int i=0;i<length;i++){
		cout << A[i] << " ";
		if(A[i]<min){
			min = A[i];
		}
		if(A[i]>max){
			max = A[i];
		}
	}
	cout << endl;
	cout << "Maximum is " << max<< endl;
	cout << "Minimum is " << min << endl;
	system("pause");		//pause the program
	return 0;
}
