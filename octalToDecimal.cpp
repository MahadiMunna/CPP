#include <bits/stdc++.h>
using namespace std;

int octToDec(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int lastDigit=n%10;
        ans+=lastDigit*x;
        x*=8;
        n/=10;
    }
    return ans;
}

int main(){
    #ifndef HEHE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;

    cout<<octToDec(n)<<endl;
}