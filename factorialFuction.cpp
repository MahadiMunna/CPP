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
int main()
{
    int a, n, m;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n >> m;
        long long int sum = fact(n) + fact(m);
        cout << sum << endl;
    }

    return 0;
}