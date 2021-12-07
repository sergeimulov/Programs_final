
#include <iostream>
#include <cmath>

 
using namespace std;

/**
* \brief поиск у
* \param х параметр ввода
* \param а параметр условия
* \return у
**/
void find_y(double x);


void find_y(double x){
	const double a=1,6;
	if(x=0){
		y=3;
		cout<<y;
	}else if(x>a){
		y=(exp(a*x)-2.5);
		cout<<y;
	} else {
        y=((a/x)+sin(x));
		cout<<y;
    }
}
 
 
long int main() { 
	double x;

	cin>>x;
	find_y(x);


	
}