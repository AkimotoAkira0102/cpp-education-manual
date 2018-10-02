#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
#include <ctime>			//include ctime files
#include <iomanip>			//include iomanip files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	time_t start,end;
	register int i,j;		//define register integer
	start = time(NULL);
	for(i=1;i<=50;i++){
		for(j=1;j<=50;j++){
			cout << setw(2) << i << "*" << setw(2) << j << "=" << setw(2) << i*j << "\t";
		}
		cout << endl;
	}
	end = time(NULL);
	cout << "It spends " << difftime(end,start) << " seconds." << endl;
	system("pause");		//pause the program
	return 0;
}
