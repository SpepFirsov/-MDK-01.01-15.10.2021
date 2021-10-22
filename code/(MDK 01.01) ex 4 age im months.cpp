# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <cmath>
# include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int x, y;
    cout << "Введите свой возраст:";
    do {
        cin >> x;
        y = x * 12;
        cout <<"Ваш возраст в месяцах равен " << y;
    } while (true);


    system("pause");
}