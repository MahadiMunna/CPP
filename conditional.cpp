#include <iostream>
using namespace std;

int main()
{
#ifndef SIMPLE
    freopen("intput.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int amount;
    cin >> amount;
    if (amount > 80000)
        cout << "Iphone" << endl;
    else if (amount > 60000)
        cout << "Samsung" << endl;
    else
        cout << "Realme\n";

    if (amount % 2 == 0)
        cout << "Even" << endl;
}