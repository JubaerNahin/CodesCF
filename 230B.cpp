#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    ll int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>m;
       double b=sqrt(m);
       ll int a=b;
       if(a==b){
       int flag=0;
      if(a%2==0 && a!=2 || a==1){
        cout<<"NO"<<endl;
      }
      else{
        for(ll int i=3;i<=sqrt(a);i+=2){
          if(a%i==0){
            flag=1;
            break;
          }
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }
    }
    else cout<<"NO"<<endl;
  }
}