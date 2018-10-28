#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std
#define size 5
void show(int []);
double average(int []);
int main(void){				//begining of main block
	int score[size] = {89,54,73,95,71};
	cout << "Scores of students:";
	show(score);
	cout << "Average score = " << average(score) << endl;
	system("pause");		//pause the program
	return 0;
}

void show(int a[]){
	for(int i=0;i<size;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

double average(int a[]){
	int total = 0;
	for(int i=0;i<size;i++){
		total += a[i];
	}
	return float(total/size);
}
