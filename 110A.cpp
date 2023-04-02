#include <iostream>
#include<climits>
using namespace std;

int main() 
{
    long long int n,a=0,a1=0,count=0;
    cin>>n;
    for(int i=0;;i++){
       a=n%10;
       a1=n/10;
      if(a==4 || a==7){
         count++;
      }
        n=a1;
      if(a1<1){
         break;
      }
    }
      if(count==4 || count==7){
       cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
    return 0;
}