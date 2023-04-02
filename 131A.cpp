#include <bits/stdc++.h>
using namespace std;

int main() 
{
    char arr[100];
    cin>>arr;
    int l,count=0;
    l=strlen(arr);
    if(l>1){
    for(int i=1;i<l;i++){
      if(arr[i]>='A' && arr[i]<='Z') count++;
    }
    if(count==l-1){
      for(int i=0;i<l;i++){
        if(arr[i]>='a' && arr[i]<='z') arr[i]=arr[i]-32;
        else if(arr[i]>='A' && arr[i]<='Z') arr[i]=arr[i]+32;
      }
      cout<<arr;
    }
    else cout<<arr;
    }
    else{
      if(arr[0]>='a' && arr[0]<='z') arr[0]=arr[0]-32;
       else if(arr[0]>='A' && arr[0]<='Z') arr[0]=arr[0]+32;
      cout<<arr;
    }
}