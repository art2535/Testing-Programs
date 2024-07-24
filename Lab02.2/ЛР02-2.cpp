/* Вариант 11. Даны натуральное число N и два одномерных массива A1, A2, …, AN и B1, B2, …, BN целых чисел.
Определить верно ли, что эти массивы отличаются только порядком следования элементов. */
#include <iostream>
#include <string>
using namespace std;
// функция для проверки, что введенная строка является числом
bool isValidInput(string str) 
{
	if (str.empty())
	{
		return false;
	}
	for (char c : str) 
	{
		if (!isdigit(c))
			return false;
	}
	return true;
}
// функция для проверки, что массивы отличаются по элементам
bool areArraysDisjoint(int* a, int* b, int n)
{
	for (int i = 0; i < n; i++) 
	{
		bool found = false;
		for (int j = 0; j < n; j++) 
		{
			if (*(a + i) == *(b + j)) 
			{
				found = true;
				break;
			}
		}
		if (!found)
			return true;
	}
	return false;
}

// функция для проверки, что массивы отличаются только порядком следования элементов
bool arraysAreDifferent(int* a, int* b, size_t n)
{
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) != *(b + i))
			return false;
	}
	return true;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	string size, n1, n2;
	int n;
	while (true)
	{
		do 
		{
			cout << "Введите размер массивов А и В -> N = ";
			getline(cin, size);
			try 
			{
				n = stoi(size);
				if (n < 0)
					cout << "Ошибка. Размер массива не может быть меньше 0. Введите положительное число. Повторите ввод." << endl;
				else if (n == 0)
					cout << "Ошибка. Размер массива не может быть равен 0. Введите положительное число. Повторите ввод." << endl;
			}
			catch (invalid_argument const& e)
			{
				cout << "Ошибка: введена строка. Пожалуйста, введите положительное число. Повторите ввод." << endl;
			}
		} while (!isValidInput(size) || n <= 0);
		int* arr1 = new int[n];
		cout << endl << "Введите элементы массива А[" << n << "]" << endl;
		for (int i = 0; i < n; i++)
		{
			do
			{
				cout << "Введите элемент А[" << i + 1 << "]: ";
				getline(cin, n1);
			} while (!isValidInput(n1));
			*(arr1 + i) = stoi(n1);
		}
		int* arr2 = new int[n];
		cout << endl << "Введите элементы массива В[" << n << "]" << endl;
		for (int i = 0; i < n; i++)
		{
			do
			{
				cout << "Введите элемент B[" << i + 1 << "]: ";
				getline(cin, n2);
			} while (!isValidInput(n2));
			*(arr2 + i) = stoi(n2);
		}
		if (areArraysDisjoint(arr1, arr2, n))
			cout << endl << "Массивы разные" << endl;
		else if (!arraysAreDifferent(arr1, arr2, n))
			cout << endl << "Массивы одинаковые -> не совпадают по порядку следования элементов" << endl;
		else
			cout << endl << "Массивы одинаковые -> совпадают по порядку следования элементов" << endl;
		delete[] arr1;
		delete[] arr2;
		cout << endl << endl;
	}
	return 0;
}