/* Вариант 11. Сравнить время работы следующих алгоритмов:
1) Сортировка методом выбора с обменом
2) Сортировка «слиянием»
Зафиксировать время для размерностей массива 100, 1000, 10000, 100000. */
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
// генерация массива случайными числами
void GenerateArr(vector<int>& arr)
{
    srand(time(0));
    for (int i = 0; i < arr.size(); i++)
        arr[i] = rand() % arr.size();
}
// вывод массива на экран
void PrintArr(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
// сортировка методом выбора с обменом
void SelectionSort(vector<int>& arr)
{
    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями
    for (int i = 0; i < arr.size(); i++)
    {
        min = i; // запомним номер текущей ячейки, как ячейки с минимальным значением
        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < arr.size(); j++)
            min = (arr[j] < arr[min]) ? j : min;
        // cделаем перестановку этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }
}
// сортировка "слиянием"
// Функция для слияния двух подмассивов
void Merge(vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1; // Размер левого подмассива
    int n2 = right - mid;    // Размер правого подмассива
    // Создаем временные массивы
    vector<int> L(n1), R(n2);
    // Копируем данные во временные массивы L[] и R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    // Сливаем временные массивы обратно в arr[l..r]
    int i = 0; // Начальный индекс первого подмассива
    int j = 0; // Начальный индекс второго подмассива
    int k = left; // Начальный индекс сливаемого подмассива
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Копируем оставшиеся элементы L[], если они есть
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Копируем оставшиеся элементы R[], если они есть
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
// Функция для выполнения сортировки слиянием
void MergeSort(vector<int>& arr, int left, int right)
{
    if (left >= right)
        return; // Возвращает рекурсивно
    int mid = left + (right - left) / 2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    Merge(arr, left, mid, right);
}
// время сортировки методом выбора с обменом
double TimeSelectionSort(vector<int>& arr)
{
    clock_t start = clock();
    SelectionSort(arr);
    clock_t end = clock();
    return static_cast<double>(end - start) / CLOCKS_PER_SEC;
}
// время сортировки «слиянием»
double TimeMergeSort(vector<int>& arr)
{
    clock_t start = clock();
    MergeSort(arr, 0, arr.size() - 1);
    clock_t end = clock();
    return static_cast<double>(end - start) / CLOCKS_PER_SEC;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int n = 100;
    for (int i = 0; i < 4; i++)
    {
        cout << "Такт " << i + 1 << endl;
        vector<int> arr(n);
        cout << "Сортировка методом \"выбора с обменом\"" << endl;
        GenerateArr(arr);
        cout << "Массив arr[" << n << "]: ";
        //PrintArr(arr);
        cout << endl << "Время сортировки методом \"выбора с обменом\" равно " << TimeSelectionSort(arr) << " секунд" << endl << endl;
        cout << "Сортировка \"слиянием\"" << endl;
        GenerateArr(arr);
        cout << "Массив arr[" << n << "]: ";
        //PrintArr(arr);
        cout << endl << "Время сортировки методом \"слиянием\" равно " << TimeMergeSort(arr) << " секунд" << endl << endl;
        n *= 10;
    }
    return 0;
}