#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,d,e,f,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>a>>b;
      if(a%b!=0){
      d=a/b;
      e=b*(d+1);
      f=(e-a);
      cout<<f<<endl;
      }
      else{
        cout<<"0"<<endl;
      }
    }
}