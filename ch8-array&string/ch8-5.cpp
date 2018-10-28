#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std
int main(void){				//begining of main block
	int sum=0;
	int sale[2][4] = {{30,35,26,32},{33,34,30,29}};
	for(int i =0;i<2; i++){
		cout << "Saleman" << i+1  << "'s performance:";
		for(int j=0; j<4; j++){
			cout << sale[i][j] << " ";
			sum += sale[i][j];
		}
		cout << endl;
	}
	cout << "Total sales this year are " << sum << " cars." << endl;
	system("pause");		//pause the program
	return 0;
}
