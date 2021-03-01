#include <iostream>

using namespace std;

int doubleNumber(int a)
{
    return a * 2;
}

int main()
{
    int a;
    cout << "Введите число: ";
    cin >> a;

    cout << "Результат: " << doubleNumber(a) << endl;   


    return 0;
}