#include <iostream>
#include <cmath>

 
using namespace std;
 
 /**
* \brief поиск давления воды
* \param h высота
* \param g гравитанционная постоянная 
* \param z плотность воды
* \return давление Р
**/
double pressure(double h);



 
int main() { 
	
	double h,P;
	cin>>h;
	P=pressure(h);
	cout<<P;
}

double pressure(double h){
	 const double g=9.81;
	 const double z=1000.0;
	 return z*g*h;
 }