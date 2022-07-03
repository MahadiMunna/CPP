#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 || i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
        if (i == 25)
        {
            break;
        }
    }
}