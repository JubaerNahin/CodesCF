#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   int s,n[4];
   for(int i=0;i<t;i++){
     cin>>s;
     for(int j=0;j<4;j++){
       n[j]=s%10;
       s=s/10;
     }  
     sort(n,n+4);
     if(n[0]==n[1] && n[1]==n[2] && n[2]==n[3]){
        cout<<-1<<endl;
     }
     else if(n[0]!=n[1] && n[1]!=n[2] && n[2]!=n[3]){
        cout<<4<<endl;
     }
     else if(n[0]==n[1] && n[1]!=n[2] && n[2]==n[3]){
        cout<<4<<endl;
     }
     else if(n[0]==n[1] && n[1]!=n[2] && n[2]!=n[3]){
        cout<<4<<endl;
     }
     else if(n[0]!=n[1] && n[1]==n[2] && n[2]!=n[3]){
        cout<<4<<endl;
     }
     else if(n[0]!=n[1] && n[1]!=n[2] && n[2]==n[3]){
        cout<<4<<endl;
     }
     else if(n[0]!=n[1] && n[1]==n[2] && n[2]==n[3]){
        cout<<6<<endl;
     }
     else{
        cout<<6<<endl;
     }
   }
}