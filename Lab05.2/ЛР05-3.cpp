/* 13. Даны две дроби A/B и C/D (А, В, С, D — натуральные числа). Составить
функции, возвращающие числитель и знаменатель дроби – результата
умножения дроби на дробь. Ответ должен быть несократимой дробью. */
#include <iostream>
using namespace std;
// функция, возвращающая числитель результирующей дроби
int NumeratorOfFraction(int a, int c)
{
    return a * c;
}
// функция, возвращающая знаменатель результирующей дроби
int DenominatorOfFraction(int b, int d)
{
    return b * d;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 0, b = 0, c = 0, d = 0;
    while (true)
    {
        try
        {
            cout << "Введите числитель первой дроби: ";
            cin >> a;
            if (cin.fail())
                throw invalid_argument("Ошибка. Введена строка.");
            cout << "Введите знаменатель первой дроби: ";
            cin >> b;
            if (cin.fail() || b == 0)
                throw invalid_argument("Ошибка. Введена строка или знаменатель равен 0.");
            cout << "Введите числитель второй дроби: ";
            cin >> c;
            if (cin.fail())
                throw invalid_argument("Ошибка. Введена строка.");
            cout << "Введите знаменатель второй дроби: ";
            cin >> d;
            if (cin.fail() || d == 0)
                throw invalid_argument("Ошибка. Введена строка или знаменатель равен 0.");
            int numerator = NumeratorOfFraction(a, c);
            int denominatior = DenominatorOfFraction(b, d);
            if (numerator < 0 && denominatior < 0)
                cout << "Результат умножения " << a << "/" << b << " на " << c << "/" << d << " равен: " << -numerator <<
                "/" << -denominatior << endl;
            else if (numerator < 0 && denominatior > 0)
                cout << "Результат умножения " << a << "/" << b << " на " << c << "/" << d << " равен: " << numerator <<
                "/" << denominatior << endl;
            else if (numerator > 0 && denominatior < 0)
                cout << "Результат умножения " << a << "/" << b << " на " << c << "/" << d << " равен: " << -numerator <<
                "/" << -denominatior << endl;
            else
                cout << "Результат умножения " << a << "/" << b << " на " << c << "/" << d << " равен: " << numerator <<
                "/" << denominatior << endl;
        }
        catch (invalid_argument const& e)
        {
            cerr << e.what() << " Повторите ввод" << endl;
            cin.ignore();
        }
        cout << endl;
    }
    return 0;
}