#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxNo = INT_MIN, minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        // if(arr[i]>maxNo){
        //     maxNo=arr[i];
        // }
        minNo = min(minNo, arr[i]);
        // if(arr[i]<minNo){
        //     minNo=arr[i];
        // }
    }
    cout << "Max- " << maxNo << endl
         << "Min- " << minNo << endl;
}