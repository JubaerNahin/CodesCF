#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    int count=0;
    for(int i=0;i<n;i++){
      if(arr[i]>90) arr[i]=arr[i]-32;
    }
    for(int i=65;i<91;i++){
      for(int j=0;j<n;j++){
        if(arr[j]==i){
          count++;
          break;
        }
      }
    }
    if(count==26) cout<<"YES";
    else cout<<"NO";
}