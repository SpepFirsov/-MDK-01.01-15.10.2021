#include <iostream>
using namespace std;
int hours, mins;
void fhours()
{
    cout << "Enter the number of hours:";
    cin >> hours;
}

void fminutes()
{
    cout << "Enter the number of minutes:";
    cin >> mins;
    cout << "Time:";
    {
        if (hours >= 10)
        {
            cout << hours<<":";
        }
        else if (hours < 10)
        {
            cout << "0" << hours<<":";
        }

        if (mins >= 10)
        {
            cout << mins;
        }
        else if (mins < 10)
        {
            cout << "0" << mins;
        }
    }
}

int main()
{
    fhours();
    if (hours > 23)
    {
        cout << "Error:number of hours cant be more than 23" << endl;;
        system("pause");
        exit(0);
    }
    fminutes();
    if (mins > 59)
    {
        cout << "Error:number of minutes cant be more than 59";
        system("pause");
        exit(0);
    }
}

