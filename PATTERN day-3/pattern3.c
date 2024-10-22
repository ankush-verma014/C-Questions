// #  0  0  0  #
// 0  #  0  #  0
// 0  0  #  0  0
// 0  #  0  #  0
// #  0  0  0  #

#include <stdio.h>

int main() {
   
   int nr,r,c;
   
   scanf("%d",&nr);
   
   for(r=1;r<=nr;r++)
   {
       for(c=1;c<=nr;c++)
       {
           if(r==c||r+c==nr+1)
           {
               printf("# ");
           }
           else
           {
               printf("0 ");
           }
          
       }
         printf("\n");
   }

    return 0;
}