#pragma once
#include <iostream>
using namespace std;
// Функция для нахождения наибольшего общего делителя (НОД) двух чисел
int largestCommonDivisor(int a, int b)
{
    if (b == 0)
        return a;
    return largestCommonDivisor(b, a % b);
}
// Функция для нахождения наименьшего общего кратного (НОК) двух чисел
int smallestCommonMultiple(int a, int b)
{
    return a / largestCommonDivisor(a, b) * b;
}
// Функция для нахождения наименьшего общего кратного (НОК) трех чисел
int smallestCommonMultiple(int a, int b, int c)
{
    try
    {
        if (a == 0 || b == 0 || c == 0)
            throw invalid_argument("Введенное число равно 0, возврат -1");
        return abs(smallestCommonMultiple(smallestCommonMultiple(a, b), c));
    }
    catch (invalid_argument const& e)
    {
        cout << endl << e.what() << endl;
        cout << "Ошибка подсчета НОК" << endl;
        return -1;
    }
}