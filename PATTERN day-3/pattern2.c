// #  #  #  #  #
// #           #
// #           #
// #           #
// #  #  #  #  #

#include <stdio.h>

int main() {
   
   int nr,r,c;
   
   scanf("%d",&nr);
   
   for(r=1;r<=nr;r++)
   {
       for(c=1;c<=nr;c++)
       {
           if(r==1 ||r==nr|| c==1 || c==nr)
           {
               printf("# ");
           }
           else
           {
               printf("  ");
           }
       }
         printf("\n");
   }

    return 0;
}