#include <iostream>

using namespace std;

int main()
{   
    int n,k,w,i,m=0,l=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
      m+=(i*k);
    }
    if(m>n){
        l=m-n;
        cout<<l<<endl;
    }    
    else cout<<0<<endl;
      
    return 0;
    
}
