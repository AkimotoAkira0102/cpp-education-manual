#include <iostream> //include iostream files
#include <cstdlib>  //include cstdlib files
using namespace std;//use namespace std

int main(void){		//begining of mian block
	int score;
	cout << "Please enter your score:";
	cin >> score;
	if(score>=0 && score <60){
		cout << "You are C class." << endl;
	} else {			//score>=60
		if(score>=80){
			cout << "You are B class." << endl;
		} else { 		//80 > score >=60
			cout << "You are A class." << endl;
		}
	}
}

