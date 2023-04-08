#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,count;
    cin>>t;
    string s,d;
    for(int i=0;i<t;i++){
       cin>>n>>d>>s;
       count=0;
      if(d[0]=='0'){ 
       s.insert(n,d); 
      }
      else{
        for(int i=0;i<n;i++){
        if(s[i]<d[0]){
            s.insert(i,d);
            break;
        }
        count++;
       }
       if(count==n){
        s.insert(n,d);
       }
      }
      cout<<s<<endl;  
    }
}