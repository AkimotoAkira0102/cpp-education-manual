#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

#define MAX 5

int main(void){				//begining of main block
	int score[MAX];
	int i=0,num;
	float sum = 0.0f;
	cout << "Enter 0 stoping input!!" << endl;
	do{
		if(i==MAX){
			cout << "No more space" << endl;
			i++;
			break;
		}
		cout << "Input score:";
		cin >> score[i];
	}while(score[i++]>0);
	num = i-1;
	for(int i=0;i<num;i++){
		sum += score[i];
	}
	cout << "Average of all is " << sum/num << endl;
	system("pause");		//pause the program
	return 0;
}
