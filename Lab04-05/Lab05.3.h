#pragma once

using namespace std;
// функция, возращающая числитель результирующей дроби
int NumeratorOfFractionLab05_3(int a, int b, int c, int d)
{
    if (b == d)
        return a - c;
    return a * d - b * c;
}
// функция, возвращающая знаменатель результирующей дроби
int DenominatorOfFractionLab05_3(int b, int d)
{
    if (b == d)
        return b;
    return b * d;
}