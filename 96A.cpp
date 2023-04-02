#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    char arr[100];
    cin>>arr;
    int l,m=0,count=0;
    l=strlen(arr);
    for(int i=0;i<l;i++){
      count=0;
      for(int j=0;j<l;j++){
        if(arr[i]==arr[j]){
          count++;
          if(count>=7){
             m++;
          }
        }
        else{
          count=0;
        }       
      }
    }
    if(m>=1){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}