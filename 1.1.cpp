
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
double a(float x, float y, float z);

/**
* \brief Поиск b
* \param х параметр ввода
* \param у параметр ввода
* \param z параметр ввода
* \return b
**/
double b(float x, float y, float z);

int main() {
int a,b;
double x,y,z;

x= 1.4;
y= 3.1;
z= 0.5;

cout << a(x, y, z) << endl;
cout << b(x, y, z) << endl;

return 0;
}

double a(float x, float y, float z) {
    return  sqrt(z * x sin(2 * x) + exp(-2x) * (x + y));
}

double b(float x, float y, float z) {
    return exp(2x) * log(z + x) - pow(y, 3x) * log(y - x);
}