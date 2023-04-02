#include<iostream>
using namespace std;
int main()
{
    int b,n,a,a1,i,count=0;
    cin>>n;
    b=n;
    for(i=1;;i++){
      a=b%10;
      a1=b/10;
      
      if( a==4 || a==7){
            count++;
     }
       b=a1;
       if(b<1){
       break;
     }
    }
    if(count==i){
      cout<<"YES"<<endl;
    } 
    else if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
