#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s,p,d,a;
    cin>>s>>p>>d;
    int l,m,n,count=0;
    l=s.size();
    m=p.size();
    n=d.size();
    a=s+p;
   
    for(int i=0;i<l+m;i++){
      for(int j=i;j<l+m;j++){
        if(a[i]>a[j]){
          int temp=0;
          temp=a[j];
          a[j]=a[i];
          a[i]=temp;
        }
      }
    }
    
    for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
        if(d[i]>d[j]){
          int temp=0;
          temp=d[j];
          d[j]=d[i];
          d[i]=temp;
        }
      }
    }
    
    if(l+m==n){
      for(int i=0;i<n;i++){
        for(int j=i;j<i+1;j++){
          if(a[i]==d[j]) count++;
          else{
            continue;
          } 
        }
      }
      if(count==n) cout<<"YES";
      else cout<<"NO";
    }
    else cout<<"NO";
}