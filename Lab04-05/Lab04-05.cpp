#include <iostream>
#include "Lab04.h"
#include "Lab05.2.h"
#include "Lab05.3.h"
int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 0, b = 0, c = 0, d = 0;
    while (true)
    {
        try
        {
            cout << "Лабораторная работа №4" << endl;
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
            cout << endl << "Лабораторная работа №5. Часть 2" << endl;
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
                int numerator = MultiplyfractionNomirator(a, b, c, d);
                int denominatior = MultiplyfractionDenomirator(a, b, c, d);
                cout << "Результат умножения " << a << "/" << b << " на " << c << "/" << d << " равен: " << numerator <<
                    "/" << denominatior << endl;
            }
            cout << endl << endl << "Лабораторная работа №5. Часть 3" << endl;
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
                int numerator = MultiplyfractionNomirator(a, b, c, d);
                int denominatior = MultiplyfractionDenomirator(a, b, c, d);
                cout << "Результат вычитания " << a << "/" << b << " из " << c << "/" << d << " равен: " << numerator <<
                    "/" << denominatior << endl;
            }
            cout << endl;
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