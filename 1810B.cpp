#include<bits/stdc++.h>
using namespace std;
 
void steps(int n,int stp,int arr[]){  
        while(stp<=41){
            n/=2;
          if(n==1){
            arr[stp++]=2;
            break;
          }
          else if(n%2==0){
            arr[stp++]=1;
            n+=1;
          }
          else{
            arr[stp++]=2;
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

}

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
    steps(n,0,arr);
    t--;
   }

}