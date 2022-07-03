#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int temp = n;
    int SumOfQ = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        SumOfQ += pow(lastDigit, 3);
        n = n / 10;
    }

    if (SumOfQ == temp)
    {
        cout << "Armstrong Number\n";
    }
    else
    {
        cout << "Not an Armstrong Number\n";
    }
}