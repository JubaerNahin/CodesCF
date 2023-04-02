#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin>>n;
   long long int arr[n],temp=1,count=1;
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
   for(int i=0;i<n-1;i++){
     if(arr[i+1]>=arr[i]){
       count++;
       if(count>temp){
         temp=count;
       }
     }
     else count=1;
   }
   cout<<temp;
}