#include <iostream>
using namespace std;

int last3(int x){
    int ans=0;
    for(int i=0;i<3;i++){
        int lastDigit=x%10;
        ans+=lastDigit;
        x/=10;  
    }
    return ans;
}
int first3(int x){
    int ans=0;
    while(x>0){
        int lastDigit=x%10;
        ans+=lastDigit;
        x/=10;  
    }
    return ans;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    
    int t;
    cin>>t;

    int x, sum1,sum2;
    for(int i=0;i<t;i++){
        cin>>x;
        sum1=last3(x);
        // cout<<sum1<<endl;
        x=x/1000;
        sum2=first3(x);
        // cout<<sum2<<endl;
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}