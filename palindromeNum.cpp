#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    int revNum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        revNum = revNum * 10 + lastdigit;
        n = n / 10;
    }
    n = temp;
    if (revNum = n)
    {
        cout << "Palindrome Number\n";
    }
    else
        cout << "Not a Palindrome Number\n";
}