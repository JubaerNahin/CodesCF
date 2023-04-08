#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,count,Yes;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        long int arr[n];
        count=0;
        Yes=0;
        for(long int j=0;j<n;j++){
           cin>>arr[j];
           if(arr[j]==j+1){ 
           Yes++;
          }
          else if(arr[j]<j+1){
           Yes++;
          }
          else count++;
        }
        if(count==n) cout<<"NO"<<endl;
        if(Yes>0) cout<<"YES"<<endl;
    }
}