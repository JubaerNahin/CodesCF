#include <iostream>
using namespace std;

int main() 
{
    int n,k,a=0,b=0;
    cin>>n>>k;
    for(int i=0;i<k;i++){
      a=n%10;
      if(a==0){
        a=n/10;
      }
      else{
        a=n-1;
      }
      n=a;
    }
    cout<<a<<endl;
}