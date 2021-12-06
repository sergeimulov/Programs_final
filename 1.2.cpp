
#include <iostream>
#include <cmath>

using namespace std;
 

/**
* \brief площадь круга
* \param d диаметр 
* \return площадь круга
**/
double area_circle(int d);


double area_circle(int d){
	return pow(d,2)/(4* M_PI);
}
 
int main() { 
	int d;
	double S;

	if (!(cin >> d) || (cin.peek() != '\n')){
		cout<<"Error";
	}else{
		S= area_circle(d);   
		cout<<S;
	}

 
}