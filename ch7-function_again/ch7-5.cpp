#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib	files
using namespace std;		//use namespace std

int &max(int &, int &);		//declare function prototype which return value is reference

int main(void){				//begining of main block
	 int i = 10, j = 20;
	 max(i,j)=100;
	 cout << "i = " << i << ", j = " << j << endl;
	 system("pause");		//pause the program
	 return 0;
}

int &max(int &a, int &b){
	return a>b?a:b;
}
