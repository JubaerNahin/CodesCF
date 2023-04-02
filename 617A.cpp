#include <iostream>

using namespace std;

int main() 
{
    int x,i,a=0,a1=0,b=0,b1=0,c=0,c1=0,d=0,d1=0,e=0,e1=0,s=0;
    cin>>x;
    a=x/5;
    a1=x%5;
    b=a1/4;
    b1=a1%4;
    c=b1/3;
    c1=b1%3;
    d=c1/2;
    d1=c1%2;
    e=d1/1;
    s=a+b+c+d+e;
    
    cout<<s<<endl;
}