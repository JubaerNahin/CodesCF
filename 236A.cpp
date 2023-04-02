#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    char arr[100];
    int m,n,count=0,temp=0;
    cin>>arr;
    m=strlen(arr);
   
    for(int i=0;i<m;i++){
    
      for(int j=i+1;j<m;j++){
          
          if(arr[j]>arr[i]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
          }
      }
    }
    for(int i=0;i<m;i++){
      for(int j=i+1;j<m;j++){
        if(arr[j]==arr[i]){
          count++;
          if(arr[j]==arr[i-1]){
            count--;
          }
        }
      }
    }
    n=m-(count);
    if(n%2==0){
      cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}