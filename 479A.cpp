#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int temp=0,F,S,T,Fo,a,b,c,A;
    cin>>a>>b>>c;
      F=a+(b*c);
      S=a*(b+c);
      T=a*b*c;
      Fo=(a+b)*c;
      A=a+b+c;
    int arr[5]={F,S,T,Fo,A};
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        if(arr[i]<arr[j]){
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;
        }
      }
    }
    cout<<arr[4]<<endl;
}