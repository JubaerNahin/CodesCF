#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    char arr[1000];
    cin>>arr;
    int l;
    l=strlen(arr);
    for(int i=0;i<l;i++){
      if(arr[0]>90){
        arr[0]=arr[0]-32;
      }
    }
    cout<<arr<<endl;
    return 0;
}