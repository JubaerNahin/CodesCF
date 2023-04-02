#include <iostream>
using namespace std;

int main() 
{
    int n,a,b,count=0,c;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      c=b-2;
      if(a<=c) count++;
    }
    cout<<count<<endl;
}