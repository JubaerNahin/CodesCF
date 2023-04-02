#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int count=0,flag=0,e=0,l=0,o=0,xtra=0;
    string s,p;
    cin>>s;
    for(int i=0;i<s.size();i++){
      count++;
      if(flag==1) break;
       if(s[i]=='h'){
         for(int j=i+1;j<s.size();j++){
           if(flag==1) break;
           if(s[j]=='e'){
             for(int k=j+1;k<s.size();k++){
               if(flag==1) break;
               if(s[k]=='l'){
                 for(int l=k+1;l<s.size();l++){
                   if(flag==1) break;
                   if(s[l]=='l'){
                     for(int m=l+1;m<s.size();m++){
                      if(flag==1) break;
                       if(s[m]=='o'){
                         flag=1;
                         cout<<"YES";
                       }
                     }
                   }
                 }
               }
             }
           }
         }
       }
    }
    if(count==s.size()) cout<<"NO";
}

