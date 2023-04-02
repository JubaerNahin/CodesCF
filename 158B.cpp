#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,res=0,temp=0;
    float one=0,two=0,three=0,four=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(arr[i]==4) four++;
      if(arr[i]==3) three++;
      if(arr[i]==2) two++;
      if(arr[i]==1) one++;
    }
    if(three>=one) res=(four+three+ceil(two/2));
    else{
      one=one-three;
      res=(four+three+ceil((two/2)+(one/4)));
    }
    
    cout<<res<<endl;
}