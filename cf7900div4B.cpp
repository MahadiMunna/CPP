#include <bits/stdc++.h>
using namespace std;

int minimum(int n,int box[]){
    int min=box[0];
    for(int i=0;i<n;i++){
        if(box[i]<min){
            min=box[i];
        }
    }
    return min;
}

int main(){
    //     #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int t,ans=0;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int box[n];
        for(int j=0;j<n;j++){
            cin>>box[j];
        }
        int min=minimum(n,box);
        for(int k=0;k<n;k++){
            ans+=box[k]-min;
        }
        cout<<ans<<endl;
        ans=0;
    }
    return 0;
}