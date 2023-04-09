#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int cal(int x){
    int large=0,small=9,num;
    while(x){
        int r=x%10;
        large=max(r,large);
        small=min(r,small);
        x=x/10;
    }
    num=large-small;
    return num;
}

void precom(){
    for(int i=1;i<1000001;i++){
        a[i]=cal(i);
    }
}

int main(){
   precom();
   int tc,n,m;
   cin>>tc;
   while(tc--){
    cin>>n>>m;
    int ans,c=0,i=n;
    while(c!=9&&i<=m){
        if(a[i]>=c){
            c=a[i];
            ans=i;
        }
        i++;
    }
    cout<<ans<<endl;
   }
}
    
