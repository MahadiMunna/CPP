#include <iostream>
using namespace std;

int main(){
    //check palindrome
    int n;
    cin>>n;

    char arr2[n+1];
    cin>>arr2;

    bool check=1;

    for(int i=0;i<n;i++){
        if(arr2[i]!=arr2[n-1-i]){
            check=0;
            break;
        }
    }
    if(check == true){
        cout<<"This Is a plaindrome";
    }
    else{
        cout<<"This is not a palindrome";
    }
}