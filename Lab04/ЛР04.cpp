/* Вариант 11. Составить функцию нахождения наименьшего общего кратного трех натуральных чисел.
Вспомогательная функция – НОД(А,В) – наибольший общий делитель для двух чисел. */
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
int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 0, b = 0, c = 0;
    while (true)
    {
        try
        {
            cout << "Введите первое число: ";
            cin >> a;
            if (cin.fail())
                throw invalid_argument("Ошибка. Введена строка. ");
            cout << "Введите второе число: ";
            cin >> b;
            if (cin.fail())
                throw invalid_argument("Ошибка. Введена строка. ");
            cout << "Введите третье число: ";
            cin >> c;
            if (cin.fail())
                throw invalid_argument("Ошибка. Введена строка. ");
            int result = smallestCommonMultiple(a, b, c);
            cout << "Наименьшее общее кратное (НОК) чисел " << a << ", " << b << " и " << c << " равно: " << result << endl << endl;
        }
        catch (invalid_argument const& e)
        {
            cerr << e.what() << "Повторите ввод." << endl << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return 0;
}