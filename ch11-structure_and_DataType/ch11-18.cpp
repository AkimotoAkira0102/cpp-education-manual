#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <iomanip> 		//include iomanip files
using namespace std;	//use namespace std

typedef struct{
	int hour,minite;
	float second;
} mytime;

void subs(mytime t[]);	//declare function prototype 

int main(void){
	mytime t[3] = {{6,24,45.58f},{3,40,17.43f}};
//	cout << setfill('0');
	subs(t);
	for(int i=0;i<3;i++){
		cout << "t[" << i << "] = " << setw(2) << t[i].hour << ":" << setw(2) << t[i].minite << ":" << setw(5) << t[i].second << endl;
	}
	system("pause");	//pause the program
	return 0;
}

void subs(mytime t[]){
	int count2 = 0, count3 = 0;
	t[2].second = t[0].second + t[1].second;
	while(t[2].second >= 60){
		t[2].second -= 60;
		count3++;
	}
	t[2].minite = t[0].minite + t[1].minite + count3;
	while(t[2].minite >= 60){
		t[2].minite -= 60;
		count2++;
	}
	t[2].hour = t[0].hour + t[1].hour + count2;
}
