#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
   char arr[100];
   cin>>arr;
   int temp=0,l;
   l=strlen(arr);
   for(int i=0;i<l;i+=2){
     for(int j=i+2;j<l;j+=2){
       if(arr[j]<arr[i]){
         temp=arr[j];
         arr[j]=arr[i];
         arr[i]=temp;
       }
     }
   }
   cout<<arr<<endl;
   return 0;
}