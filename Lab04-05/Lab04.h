#pragma once
#include <iostream>
using namespace std;
// ������� ��� ���������� ����������� ������ �������� (���) ���� �����
int largestCommonDivisor(int a, int b)
{
    if (b == 0)
        return a;
    return largestCommonDivisor(b, a % b);
}
// ������� ��� ���������� ����������� ������ �������� (���) ���� �����
int smallestCommonMultiple(int a, int b)
{
    return a / largestCommonDivisor(a, b) * b;
}
// ������� ��� ���������� ����������� ������ �������� (���) ���� �����
int smallestCommonMultiple(int a, int b, int c)
{
    try
    {
        if (a == 0 || b == 0 || c == 0)
            throw invalid_argument("��������� ����� ����� 0, ������� -1");
        return abs(smallestCommonMultiple(smallestCommonMultiple(a, b), c));
    }
    catch (invalid_argument const& e)
    {
        cout << endl << e.what() << endl;
        cout << "������ �������� ���" << endl;
        return -1;
    }
}