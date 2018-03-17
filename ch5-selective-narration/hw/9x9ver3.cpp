#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int i,j,k;
	for(i=0;i<12;i++)
	{
		for(j=(i/4)*3+(i%4)+1;j<10 && (i%4)!=3;j+=9)		//if(i%4==3) line skipping
		{
			for(k=1;k<10;k++)
			{
				cout << j << "*" << k << "=" << j*k << "\t";
			}
		}
	cout << endl;
	}
}
