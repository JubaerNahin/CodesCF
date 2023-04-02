#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,n, m;
    cin>>t;
    for(int i=0;i<t;i++){
      cin>>n;
      if(n%2==0){
        m=n/2;
        cout<<m-1<<endl;
      }
      else{
      m=n/2;
      cout<<m<<endl;
     }
   }
}