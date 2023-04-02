#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n],l=0,h=0,ph=0,res=0,pl=0,count1=0,count2=0;
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
   h=arr[0];
   l=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>h){
         h=arr[i];
         ph=i;
       }
   }
   for(int i=0;i<n;i++){
       if(arr[i]<=l){
           l=arr[i];
           pl=i;
       }
   }
   if(ph>pl)  cout<<(n-pl)+ph-2<<endl;
   else  cout<<(n-pl)+ph-1<<endl;
}