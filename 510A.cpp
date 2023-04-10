#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2!=0 || j==1 && i%4==0 || j==m && i%4!=0){
                arr[i][j]='#';
            } 
            else arr[i][j]='.';
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
          cout<<arr[i][j];   
        }
        cout<<endl;
    }    
}