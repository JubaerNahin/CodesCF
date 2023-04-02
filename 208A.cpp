#include <bits/stdc++.h>
using namespace std;

int main() 
{
  char arr[200];
  cin>>arr;
  int l;
  l=strlen(arr);
  for(int i=0;i<l;i++){
    if(arr[i]=='W' && arr[i+1]=='U' && arr[i+2]=='B'){
      i+=2;
      if(arr[i-3]=='B' && arr[i-4]=='U' && arr[i-5]=='W') continue;
      else cout<<" ";
    }
    else  cout<<arr[i];
  }
}