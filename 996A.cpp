#include <iostream>
using namespace std;

int main() 
{
    int n,b100,b20,b10,b5,b1;
    cin>>n;
    b100=n/100;
    n=n%100;
    b20=n/20;
    n=n%20;
    b10=n/10;
    n=n%10;
    b5=n/5;
    b1=n%5;
    cout<<b100+b20+b10+b5+b1;
}