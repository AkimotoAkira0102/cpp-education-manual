#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main (void){		//begining of main block
	int dogs;			//number of dogs
	cout << "How many dogs do you have?";  //print the string
	cin >> dogs;			//enter the number of dogs  *cin will wrap automatically
	if (dogs>1){		//determinre single or plural
		cout << "You have " << dogs << " dogs!" << endl;	//print the number of dogs
    }
	else
	{
		if(dogs==1){		//determine zero or one dog
			cout << "You have a dog!" << endl;	//print a dog
		}
		else{
			cout << "You don't have dog." << endl;
		}
	}
	system ("pause");	//pause the program
	return 0;			//return inetger 0 
}						//end of main block
