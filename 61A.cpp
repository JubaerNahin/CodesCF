#include <bits/stdc++.h>
using namespace std;

int main() 
{
    char arr1[100],arr2[100];
    cin>>arr1>>arr2;
    int l,i,j;
    l=strlen(arr1);
    for(i=0;i<l;i++){
      for(j=i;j<i+1;j++){
        if(arr1[i]==arr2[j]) cout<<'0';
        else cout<<'1';
      }
    }
}