#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
#include <ctime>			//include ctime files
#include <iomanip>			//include iomanip files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	time_t start,end,start_2,end_2;
	register int i,j;		//define register integer
	int x,y;
	start = time(NULL);
	for(i=1;i<=50;i++){
		for(j=1;j<=50;j++){
			cout << setw(2) << i << "*" << setw(2) << j << "=" << setw(2) << i*j << "\t";
		}
		cout << endl;
	}
	end = time(NULL);
	cout << "It spends " << difftime(end,start) << " seconds." << endl;
	cout << "================" << endl;
	start_2 = time(NULL);
	for(x=1;x<=50;x++){
		for(y=1;y<=50;y++){
			cout << setw(2) << x << "*" << setw(2) << y << "=" << setw(2) << x*y << "\t";
		}
		cout << endl;
	}
	end_2 = time(NULL);
	cout << "It spends " << difftime(end_2,start_2) << " seconds." << endl;
	system("pause");		//pause the program
	return 0;
}
