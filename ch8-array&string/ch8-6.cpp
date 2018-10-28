#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int A[2][4][3] = {{{21,32,65},{78,94,76},{79,44,65},{89,54,73}},
						{{32,56,89},{43,23,32},{32,56,78},{94,78,45}}};
	int max=0;
	for(int i =0; i<2; i++){
		for(int j=0; j<4; j++){
			for(int k=0; k<3; k++){
				if(A[i][j][k]>max){
					max = A[i][j][k];
				}
			}
		}
	}
	cout << "MAX = " << max << endl;
	system("pause");		//pause the program
	return 0;
}
