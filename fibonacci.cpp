#include <bits/stdc++.h>
using namespace std;
void fib(int n)
{
    int t1 = 0, t2 = 1, nextt;
    for (int i = 0; i < n; i++)
    {
        cout << t1;
        nextt = t1 + t2;
        t1 = t2;
        t2 = nextt;
    }
}
int main()
{
    int n;
    cin >> n;
    fib(n);
}