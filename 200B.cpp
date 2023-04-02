#include<bits/stdc++.h>
using namespace std;

int main()
{
  float tot=0,count=0,p,q,r;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>p;
    q=p/100;
    tot+=q;
    count++;
  }
   r=((tot*100)/(count*100));
   
   cout<<r*100<<endl;
}