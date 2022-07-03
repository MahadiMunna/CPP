#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4] = {10, 20, 30, 40};
    cout << arr[3];

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}