#include <iostream>
#include <cstdlib>
using namespace std;
int main (void){
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=1;j<4;j++)
		{
			for(k=1;k<10;k++)
			{
				cout << j+3*i << "*" << k << "=" << (j+3*i)*k << "\t";if(k==9){cout << endl;}
			}
		}
	cout << endl;
	}
	system("pause");
	return 0;
}
