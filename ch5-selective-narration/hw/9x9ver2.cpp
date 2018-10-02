#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{	
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=1+3*i;j<10;j++)
		{
			for(k=1;k<10;k++)
			{
				cout << j << "*" << k << "=" << j*k << "\t";if(k==9){cout << endl;}
			}
		if(j>2+3*i)break;
		}
	cout << "\n";
	}
	system("pause");
	return 0;
}
