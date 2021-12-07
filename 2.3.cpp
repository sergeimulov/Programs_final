#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief проверка на то можно ли вырезать из круглой заготовки радиуса r вырезать прямо-ые заготовки с параметрами a,b,c,d
* \param a параметр ввода
* \param b параметр ввода
* \param c параметр ввода
* \param d параметр ввода
* \param R параметр ввода
**/
void test(const int a,const int b,const int c, const int d, const int R);

int main()
{
	double R,a, b, c, d;
    cout << "Wedite znachenia R, a, b, c, d" << endl;
    cin >> R >> a >> b >> c >> d;
	test(a,b,c,d,R);
}

void test(const int a,const int b,const int c, const int d, const int R){
	int  max_a=0, max_b=0;
	max_a=a>b?a:b;
    max_b=c>d?c:d;

	if (sqrt(pow(max_a,2) + pow(max_b,2)) <= 2*R) {
        cout << "Mozhno" << endl;
    }else{
        cout << "Nelzia" << endl;
    }
}