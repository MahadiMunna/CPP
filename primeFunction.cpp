#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            cout << i << endl;
        }
    }
}