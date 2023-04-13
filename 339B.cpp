#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    long long int tot=0;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];  
    }
    for(int i=1;i<m;i++){
        if(arr[i]>arr[i-1]){
            tot+=arr[i]-arr[i-1];
        }
        else if(arr[i]<arr[i-1]){
            tot+=n-arr[i-1];
            tot+=arr[i];
        }
        else{
            tot+=arr[i]-arr[i-1];
        }
    }
    tot+=arr[0]-1;
    cout<<tot;
}