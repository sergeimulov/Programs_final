#include <iostream>
#include <cmath>

 
using namespace std;
 
/**
* \brief площадь трапеции
* \param a параметр ввода
* \param b параметр ввода
* \param h параметр ввода
* \return площадь трапеции
*/
double trapezoid_area(double a, double b, double h);
 
 
/**
* \brief площадь круга
* \param r параметр ввода
* \return площадь круга
*/
double area_circle(int r);

 
 double trapezoid_area(double a, double b, double h){
	 return ((h*(a+b))/2);
 }


 double area_circle(double r){
	 return (4*3.14*pow(r,2));
 }
 
int main() { 
	double a,b,h,r,c;
	double S;

	cout<<"Какой фигуры вам надо посчитать площадь."<<endl<<"1 Трапеция."<<endl<<"2 Круг."<<endl;
	cin>>c;
	if (c==1){
		cout<<"Введите длина 1-ого основания,длина 2-ого основания,длина высоты трапеции(в строчку с пробелами)";
		cin>>a,b,h;
		S=trapezoid_area(a,b,h);
		cout<<S;
	}else if(c==2){
		cout<<"Введите радиус";
		cin>>r;
		S=area_circle(r);
		cout<<S;
	}
}