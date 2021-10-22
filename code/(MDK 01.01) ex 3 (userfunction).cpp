// (MDK 01.01 ex 3 pg83).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
using namespace std;

void func(int)
{
    cout << "Three blind mice" << endl;;
}

void func2(int)
{
    cout << "See how they run" << endl;;
}
int main()
{
    func(1);
    func(1);
    func2(1);
    func2(1);
}
