#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,stp,arr[40];
    cin>>t;
    while(t>0){
        cin>>n;
        if(n%2==0){
            cout<<-1<<endl;
            t--;
            continue;
        }
        int x;
        stp=0;
    
        while(stp<=41){
            x=n/2;
          if(x==1){
            arr[stp++]=2;
            break;
          }
          else if(x%2==0){
            arr[stp++]=1;
            n=x+1;
          }
          else{
            arr[stp++]=2;
            n=x;
          }
        }
        if(stp>40 || stp==0) cout<<-1<<endl;
        else{
            cout<<stp<<endl;
            for(int i=stp-1;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        --t;
       
    }
}