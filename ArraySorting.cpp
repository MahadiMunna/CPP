#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//selection sort
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<arr[i]){
    //             int temp=arr[j];
    //             arr[j]=arr[i];
    //             arr[i]=temp;
    //         }
    //     }
    // }

//bubble sort
    // int counter=1;
    // while(counter<n){
    //     for(int i=0;i<n-counter;i++){
    //         if(arr[i]>arr[i+1]){
    //             int temp=arr[i];
    //             arr[i]=arr[i+1];
    //             arr[i+1]=temp;
    //         }
    //     }
    //     counter++;
    // }

//insertion sort
    for(int i=0;i<n;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}