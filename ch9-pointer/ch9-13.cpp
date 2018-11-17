<<<<<<< HEAD
#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

double triangle(double, double), rectangle(double,double);
void showarea(double,double,double (*pf)(double,double));

int main(void){
	cout << "Triangle(6,3.2) = ";
	showarea(6,3.2,triangle);
	cout << "Rectangle(4,6.1) = ";
	showarea(4,6.1,rectangle);
	system("pause");	//pause the program
	return 0;
}

double triangle(double height, double base){
	return (height*base/2);
}

double rectangle(double height, double width){
	return (height*width);
}

void showarea(double x, double y, double (*pf)(double,double)){
	cout << (*pf)(x,y) << endl;
	return;
}
=======
#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

double triangle(double, double), rectangle(double,double);
void showarea(double,double,double (*pf)(double,double));

int main(void){
	cout << "Triangle(6,3.2) = ";
	showarea(6,3.2,triangle);
	cout << "Rectangle(4,6.1) = ";
	showarea(4,6.1,rectangle);
	system("pause");	//pause the program
	return 0;
}

double triangle(double height, double base){
	return (height*base/2);
}

double rectangle(double height, double width){
	return (height*width);
}

void showarea(double x, double y, double (*pf)(double,double)){
	cout << (*pf)(x,y) << endl;
	return;
}
>>>>>>> 6bb161d095893fad516c75f2005ab2b2dfbd3d60
