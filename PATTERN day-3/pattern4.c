// 0  0  0  0  1
// 0  0  0  1  1
// 0  0  1  1  1
// 0  1  1  1  1
// 1  1  1  1  1


#include <stdio.h>

int main() {
   
   int nr,r,c;
   
   scanf("%d",&nr);
   
   for(r=1;r<=nr;r++)
   {
       for(c=1;c<=nr;c++)
       {
           if(c<=nr-r)
           {
               printf("0 ");
           }
           else
           {
               printf("1 ");
           }
       }
         printf("\n");
   }

    return 0;
}