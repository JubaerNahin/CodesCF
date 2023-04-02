#include <iostream>
using namespace std;

int main() 
{
    int n,j,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      arr[i]=arr[i]-1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
           if(arr[j]==i){
             j=j+1;
             cout<<j<<" ";  
           }
    }
}    