
#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Поиск а
* \param х параметр ввода
* \param у параметр ввода
* \param z параметр ввода
* \return а
**/
double geta(const double x, const double y, const double z);

/**
* \brief Поиск b
* \param х параметр ввода
* \param у параметр ввода
* \param z параметр ввода
* \return b
**/
double getb(const double x, const double y, const double z);

int main() {


const double x= 1.4;
const double y= 3.1;
const double z= 0.5;

double a = geta(x, y, z);
double b = getb(x, y, z);

cout << a << b << endl;


return 0;
}

double geta(const double x, const double y, const double z){
    return  sqrt(z * x (sin(2 * x)) + exp(-2x) * (x + y) );
}

double getb(const double x, const double y, const double z){
    return exp(2x) * log(z + x) - pow(y, 3x) * log(y - x);
}