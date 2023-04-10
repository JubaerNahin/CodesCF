#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   int s,n,c=0;
   cin>>s>>n;
   int x[n],y[n],z[n];
   for(int i=0;i<n;i++){
     cin>>x[i]>>y[i];
   }
   for(int i=1;i<=n;i++){
    for(int j=0;j<n-i;j++){
       if(x[j+1]<x[j]){
         swap(x[j],x[j+1]);
         swap(y[j],y[j+1]);
       }
     }
   }
   for(int i=0;i<n;i++){
     if(x[i]<s) s=s+y[i];
     else break;
     c++;
      
   }
   if(c==n) cout<<"YES";
   else cout<<"NO";
}