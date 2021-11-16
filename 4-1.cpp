#define _USE_MATH_DEFINES // for C++

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


/**
* \brief Заполнение массива случайными числами
* \param array Массив
* \param size Размер массива
* \param LOW_BOUND Минимально возможное число
* \param UP_BOUND Максимально возможное число
**/
void randomDigits(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND);

/**
* \brief Ввод массива с клавиатуры
* \param array Массив
* \param size Размер массива
**/
void userInput(int* array, const int  size);

/**
* \brief Вывод массива
* \param array Массив
* \param size Размер массива
**/
void Print(int* array, const int size);

/**
* \brief Заменить второй элемент массива на максимальный среди отрицательных.
* \param array Массив
* \param size Размер массива
* \param return Значение суммы
**/
int replacement(int* array, const int size);

/**
* \brief Найти количество тех элементов, значения которых положительны и по модулю не превосходят заданное число А.
* \param array Массив
* \param size Размер массива
**/
void amount_of_numbers(int* array, const int size);

/**
* \brief Метод,Найти номер первой пары соседних элементов, сумма которых меньше заданного числа.
* \param array Массив
* \param size Размер массива
**/
void multiplyАllmultiplesThrebyThirdElement(int* array, const int size);

/**
* \brief Выбор заполнеия массива
**/
enum class Filling
{
	RANDOM = 1,
	USER = 2
};


/**
* \brief Точка входа в программу
* \return Код ошибки (0-успех)
**/
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int LOW_BOUND = -10, UP_BOUND = 10;

	cout << "Введите количество элементов массива: ";
	int* array;
	int size;
	cin >> size;

	array = new int[size];
	cout << "1 - Сгенерировать массив\n2 - Заполнить массив вручную\n";
	int choice;
	cin >> choice;

	const auto filling = static_cast<Filling>(choice);
	switch (filling)
	{
	case Filling::RANDOM:
		randomDigits(array, size, LOW_BOUND, UP_BOUND);
		Print(array, size);
		break;
	case Filling::USER:
		userInput(array, size);
		Print(array, size);
		break;
	default:
		cout << "Ошибка! Не выбран ни один из вариантов";
	}

	cout << "Заменить второй элемент массива на максимальный среди отрицательных = " << replacement(array, size) << "\n\n";

	cout << "Найти количество тех элементов, значения которых положительны и по модулю не превосходят заданное число А:\n";
	amount_of_numbers(array, size);

	cout << "Найти номер первой пары соседних элементов, сумма которых меньше заданного числа:\n";
	multiplyАllmultiplesThrebyThirdElement(array, size);

	delete[] array;

	return 0;
}

void randomDigits(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND) {
	for (size_t i = 0; i < size; i++) {
		array[i] = rand() % (2 * UP_BOUND + 1) + LOW_BOUND;
	}
}

void userInput(int* array, const int  size) {
	for (size_t i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> array[i];
	}
}

void Print(int* array, const int size) {
	cout << "array[" << size << "]" << "= {";
	for (size_t i = 0; i < size - 1; i++) {
		cout << array[i] << ";" << setw(3);
	}
	cout << array[size - 1] << "}\n\n";
}

int replacement(int* array, const int size) {
	int z = array[0];
	for (size_t i = 0; i < size; i++) {
		if ((array[i]<z)&&(array[i]<0)) {
			z = array[i];
		}
	}
	array[2]=z;
}

void amount_of_numbers(int* array, const int size) {
	double A;
	int c=0;
	cin>>A;
	for (size_t i = 0; i < size; i++) {
		if ((array[i] > 0)&&(array[i]<A) ){
			c++;
		}
	}

	cout << c <<"\n";
}

void multiplyАllmultiplesThrebyThirdElement(int* array, const int size) {
	int F;
	cin>>F;
	for (size_t i = 0; i < size-1; i++) {
		if (((array[i]*array[i+1])<0) and ((array[i]+array[i+1])<F)) {
			cout<<"Вот эти числа"<<i<<" "<<i+1;
		}
	}
}