#include <bits/stdc++.h>
using namespace std;

int main() 
{
    char F[100],S[100];
    cin>>F>>S;
    int l,temp=0,count=0;
    l=strlen(F);
     for(int i=0;i<l;i++){
       if(F[i]>90) F[i]=F[i]-32;
     }
     for(int i=0;i<l;i++){
       if(S[i]>90) S[i]=S[i]-32;
     }
     
      for(int i=0;i<l;i++){
          if(F[i]>S[i]){
            cout<<"1"<<endl;
            break;
        }
        else if(F[i]<S[i]){
          cout<<"-1"<<endl;
          break;
        }
        else{
          count++;
          continue;
        }
       }
      if(count==l) cout<<"0"<<endl;
}
   
