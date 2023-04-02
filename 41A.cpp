#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    char a[100],b[100];
    cin>>a>>b;
    int M,l,count=0,j;
    l=strlen(a);
    M=strlen(b);
    if(l==M){
    for(int i=0;i<l;i++){
      if(a[i]!=b[M-i-1]){ 
        count++;
        cout<<"NO"<<endl;
         break;
      }
     }
     if(count==0) cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    
}