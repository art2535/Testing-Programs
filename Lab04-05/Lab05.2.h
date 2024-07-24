#pragma once

using namespace std;
// 
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(a, a % b);
}
// функция, возвращающая числитель результирующей дроби
int NumeratorOfFractionLab05_2(int a, int c)
{
    return a * c;
}
// функция, возвращающая знаменатель результирующей дроби
int DenominatorOfFractionLab05_2(int b, int d)
{
    return b * d;
}
// 
int MultiplyfractionNomirator(int a, int b, int c, int d)
{
    int num = NumeratorOfFractionLab05_2(a, c);
    int denom = DenominatorOfFractionLab05_2(b, d);
    int common = gcd(num, denom);
    num /= common;
    return num;
}
// 
int MultiplyfractionDenomirator(int a, int b, int c, int d)
{
    int num = NumeratorOfFractionLab05_2(a, c);
    int denom = DenominatorOfFractionLab05_2(b, d);
    int common = gcd(num, denom);
    denom /= common;
    return num;
}