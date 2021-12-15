#include <iostream>
#include <cmath>
using namespace std;

void searchPositive(int [22], int);

int main()
{
    setlocale(LC_ALL, "RUS");
    int t[22];
    int elementBegin = -20;
    int elementEnd = 37;
    for (int i = 0; i < 22; i++)
    {
        if (elementBegin <= elementEnd)
        {
            t[i] = elementBegin;
            elementBegin++;
            cout << t[i] << "\t";
        }
    }
    cout << endl;
    searchPositive(t, 22);
    cout << endl;
    for (int i = 0; i < 22; i++)
    {
        cout << t[i] << "\t";
    }
    return 0;
}

void searchPositive(int arr[22], int size)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= 0 || arr[i] % 5 == 1)
        {
            count++;
            sum += arr[i];
            arr[i] = 0;
        }
    }
    cout << "Количество: " << count << endl;
    cout << "Сумма: " << sum << endl;
}