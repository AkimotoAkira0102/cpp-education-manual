#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main (void){		//begining of main block
	int score;			//declaring integer score
	cout << "Please enter your score:";		//print string
	cin >> score;		//set a integer in score
	//decide input value is error or not
	if (score<0 || score >100){		//decide score 
		cout << "input error!!" << endl;		//print input error!!
	}
	
	if (score<60 && score>49){		//decide score
		cout << "Make up exam.!!" << endl;	//print string
	}
	
	if(score>=60 && score<=100){	//decide score
		cout << "Pass the exam." << endl;	//print string
	}
	
	if(score>=0 && score<50){		//decide score
		cout << "You need to retake the course." << endl;		//print string
	}
	system ("pause");	//pause the program
	return 0;			//return integer 0
}						//end of main block
