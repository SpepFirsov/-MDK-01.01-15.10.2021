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

    int x, y,x2,y2,f;
    cout << "Введите число фарлонгов" << endl;
    do {
        cin >> x;
        x2 = x;
        f = x;
        y = x * 220;
        y2 = x2 * 201168;
        cout <<f <<" фарлонгов равняется "<<y<< " в ярдах и " << y2<<" в метрах"<<endl;
    } while (true);


    system("pause");
}