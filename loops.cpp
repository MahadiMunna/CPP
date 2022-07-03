#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is " << sum << " of 1st " << n << "th number" << endl;

    while (n >= 0)
    {
        cout << "Positive" << endl;
        cin >> n;
    }
    cout << "Negative\n";

    do
    {
        cout << "Enter positive number for exit\n";
        cin >> n;
    } while (n < 0);

    return 0;
}
