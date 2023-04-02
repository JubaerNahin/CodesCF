#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int s1,s2,s3,s4,count=0,temp=0;
    cin>>s1>>s2>>s3>>s4;
    int arr[4]={s1,s2,s3,s4};
    
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        if(arr[i]<arr[j]){
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;
        } 
      }
    }
    for(int i=0;i<4;i++){
        if(arr[i]==arr[i+1]) count++;
      }
     cout<<count<<endl;
}