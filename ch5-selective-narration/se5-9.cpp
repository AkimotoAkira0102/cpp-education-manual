#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int money;
	cout << "Input How much dose you pay in this sale? ";
	cin >> money;
	if(money>=1000 && money<3000)
		cout << "You get 5% off. The bill is " << money*0.05 << " dollars." << endl;
	if(money>=3000 && money<5000)
		cout << "You get 8% off. The bill is " << money*0.08 << " dollars." << endl;
	if(money>=5000 && money<10000)
		cout << "You get 10% off. The bill is " << money*0.1 << " dollars." << endl;
	if(money>=10000)
		cout << "You get 15% off. The bill is " << money*0.15 << " dollars." << endl;
	system("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
