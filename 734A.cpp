#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    int n,l,A=0,D=0;
    cin>>n;
    char s[n];
    cin>>s;
    l=strlen(s);
    for(int i=0;i<l;i++){
      if(s[i]=='A'){
        A++;
      }
      else{
        D++;
      }
    }
    if(A>D){
      cout<<"Anton"<<endl;
    }
    else if(A==D){
      cout<<"Friendship"<<endl;
    }
    else{
      cout<<"Danik"<<endl;
    }
    return 0;
}