// nCr=n!/((n-r)!*r!)

#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int combination(int n, int r)
{
    return fact(n) / (fact(n - r) * fact(r));
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << "Result = " << combination(n, r) << endl;
}