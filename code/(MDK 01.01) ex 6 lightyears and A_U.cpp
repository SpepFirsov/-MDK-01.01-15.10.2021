#include <iostream>
using namespace std;
int main()
{
    double ly, astr, l2;
    cout << "Enter the number of light years:";
    do {
        cin >> ly;
        l2 = ly;
        astr = ly *63240;
        cout << l2 << " light years= " << astr << " astronomical units";
    } while (true);

    return 0;

}

