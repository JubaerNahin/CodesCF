#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int length;
    gets(str);
    length=strlen(str);
   
    for(int i=0;i<length;i++){
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='Y' || str[i]=='U')
        continue;
      else{
        printf(".%c",tolower(str[i]));
      }
    }
    
}