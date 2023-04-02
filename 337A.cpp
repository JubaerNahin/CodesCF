#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int res=0,diff=0,n,m;
    cin>>n>>m;
    int arr[m],r[m-n+1];
    for(int i=0;i<m;i++){
      cin>>arr[i];
    }
    for(int i=0;i<m;i++){
      for(int j=i;j<m;j++){
        if(arr[i]>arr[j]){
          int temp=0;
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;
        }
      }
    }
    for(int i=0;i<=m-n;i++){
      res=arr[i+n-1]-arr[i];
      r[i]=res;
    }
     
    int l=sizeof(r)/sizeof(r[0]);
   
    for(int i=1;i< l;i++){
    int key=r[i],j;
    j=i-1;
    while (j>=0 && r[j]>key){
        r[j+1]=r[j];
        j=j-1;
    }
     r[j+1]=key;
   }
    cout<<r[0];
}