#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int code;
	int USD,NTD;
	float USDtoNTD,NTDtoUSD;
	NTDtoUSD=0.33954f;
	USDtoNTD=29.3169f;
	cout << "Do you have NTD or US dollars?" << endl; 
	cout << "If you have New Taiwan dollars, please enter 1." << endl;
	cout << "If you have US dollars, please enter 2." << endl;;
	cout << "1.NTD 2.USD:";
	cin >> code;
	switch(code){
		case 1:
			cout << "How much NTD do you have?";
			cin >> NTD;
			cout << NTD << " New Taiwan dollars is equal to " << NTD*NTDtoUSD << " US dollars." << endl;
			break;
		case 2:
			cout << "How much USD do you have?";
			cin >> USD;
			cout << USD << " US dollars is equal to " << USD*USDtoNTD << " New Taiwan dollars." << endl;
	}
}							//end of main block
