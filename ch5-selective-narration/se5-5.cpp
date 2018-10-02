#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
#include <cmath>
using namespace std;		//use namespace std

int main (void){			//begining of main block
	float height,weight,BMI;		//declaring height and weight are float point number
	
	//input weight and height
	cout << "Please enter your weight(kg):";
	cin >> weight;
	cout << "Please enter your height(m):";
	cin >> height;			
	BMI=weight/pow(height,2);
	
	cout << "Your BMI is " << BMI << endl;		//output BMI
	
	//Alert
	if(BMI<18.5)
	cout << "You are uderweight." << endl;
	
	if(BMI>=24)
	cout << "Your are overweight." << endl;
	
	if(BMI>=18.5 && BMI<24)
	cout << "You are standard body weight." << endl;
	
	system("pause");		//pause the program
	return 0;				//return integer 0
} 							//end of main block
