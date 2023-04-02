#include <iostream>
#include<cstring>
#include<string.h>
using namespace std;

int main() 
{
   char arr[100];
   cin>>arr;
   int l,upper=0,lower=0;
   l=strlen(arr);
   for(int i=0;i<l;i++){
     if(arr[i]>=65 && arr[i]<=90){
       upper++;
      
     }
     if(arr[i]>=97 && arr[i]<=122){
       lower++;
     }
   }
   if(upper>lower){
     for(int i=0;i<l;i++){
       if(arr[i]>=97 && arr[i]<=122){
         arr[i]=arr[i]-32;
         
       }
     }
   }
  
   else if(upper==lower){
      for(int i=0;i<l;i++){
       if(arr[i]>=65 && arr[i]<=90){
         arr[i]=arr[i]+32;
       }
     }
   }
   else{
     for(int i=0;i<l;i++){
       if(arr[i]>=65 && arr[i]<=90){
         arr[i]=arr[i]+32;
       }
     }
   }
   for(int i=0;i<l;i++){
      cout<<arr[i];
   }
}