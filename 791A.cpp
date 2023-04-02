#include <iostream>
using namespace std;

int main() 
{
    int a,b,i,n,m,count=0;
    cin>>a>>b;
    n=a*3;
    m=b*2;
    for(i=0;i<10;i++){
      count++;
      if(n>m){
        break;
      }
      n=n*3;
      m=m*2;
      
    }
    cout<<count<<endl;
    return 0;
}