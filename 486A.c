#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  long long int n,total;
  scanf("%lld",&n);
  if(n%2==0){
    total=n/2;
    printf("%lld\n",total);
  }
  else{
    
    total=((n+1))/2*-1;
    printf("%lld\n",total);
  }
  
  return 0;
   
   
}