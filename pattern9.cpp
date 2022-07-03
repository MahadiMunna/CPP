#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n + n - k; j >= 1; j--)
        {
            if (j > n)
                cout << " ";
            else
                cout << "* ";
        }
        k++;
        cout << endl;
    }
}