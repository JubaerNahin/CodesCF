#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   long long int n,m,o,p;
   double a;
   scanf("%lld %lld %lf",&n,&m,&a);
   o=ceil(n/a);
   p=ceil(m/a);
   printf("%lld",p*o);
   return 0;
}