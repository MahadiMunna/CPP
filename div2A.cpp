#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("intput.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,one=0,two=0,three=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        if(arr[i]==2){
            two+=1;
        }
        else if(arr[i]==1){
            one+=1;
        }
        else if(arr[i]==3){
            three+=1;
        }
    }
    int ans;
    cout<<one<<two<<three;
    if(two>=one&&two>=three){
        cout<<one+three<<endl;
    }
    else if(one>=two&&one>=three){
        cout<<two+three<<endl;
    }
    else if(three>=one&&three>=two){
        cout<<one+two<<endl;
    }

}