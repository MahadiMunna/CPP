#include <iostream>
using namespace std;

int main(){
    //longest word
    int m;
    cin>>m;

    cin.ignore();
    char arr[m+1];

    cin.getline(arr,m);
    cin.ignore();

    int i=0;
    int curLen=0,maxLen=0;
    int st=0,maxst=0;

    while(1){
        if(arr[i]==' '||arr[i]=='\0'){
            if(curLen>maxLen){
                maxLen=curLen;
                maxst=st;
            }
            curLen=0;
            st=i+1;
        }
        else
        curLen++;
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxst];
    }
}