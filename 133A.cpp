#include <bits/stdc++.h>
using namespace std;

int main() 
{
   char arr[100];
   cin>>arr;
   int l,count=0;
   l=strlen(arr);
   for(int i=0;i<l;i++){
     if(arr[i]=='H' || arr[i]=='Q' ||arr[i]=='9'){
      cout<<"YES"<<endl; 
      break; 
     }
     count++;
   }  
   if(count==l) cout<<"NO"<<endl;
}