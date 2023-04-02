#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,arr[5][5],count=0,n=0,m=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==1){
                if(i>2){
                   n=(i-2);
              
                }
                if(j>2){
                   m=(j-2);
                }
                if(i<2){
                   n=(2-i);
                }
                if(j<2){
                   m=(2-j);
                }
            }
       }
    
    }
    count=n+m;
    cout<<count<<endl;

}
