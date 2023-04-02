#include <stdio.h>
int main()
{
   int y,i,i1,i2,i3,z,z1,z2,z3;
   scanf("%d",&y);
   for(i=y+1;;i++){
   z=i%10;
   i1=i/10;
   z1=i1%10;
   i2=i1/10;
   z2=i2%10;
   i3=i2/10;
   z3=i3%10;
    
    if(z!=z1 && z!=z2 && z!=z3 && z1!=z2 && z1!=z3 && z2!=z3){
     printf("%d",i);
     break;
    }  
    
  }
  return 0;
}