#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

#define LEN 2
#define WID 5
void show(int [LEN][WID]);

int main(void){				//begining of main block
	int A[LEN][WID] = {{81,52,13,96,27}
					,{24,23,10,32,16}};
	show(A);
	system("pause");		//pause the program
	return 0;
}

void show(int a[LEN][WID]){
	for(int i=0;i<LEN;i++){
		for(int j=0;j<WID;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
