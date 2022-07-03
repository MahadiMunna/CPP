#include <iostream>
using namespace std;

int main()
{
    char button;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "apple" << endl;
        break;
    case 'b':
        cout << "Ball" << endl;
        break;
    case 'c':
        cout << "Cat\n";
        break;
    default:
        cout << "Not matched\n";
        break;
    }
}