// Write C program to given pattern.

// *  *  *  *  *
// *  *  *  *  
// *  *  *      
// *  *
// *

#include <stdio.h>

int main() {
     int nr,r,c;
     
     scanf("%d",&nr);
     
     for(r=nr;r>=1;r--)
     {
         for(c=1;c<=r;c++)
         {
             printf("* ");
         }
         printf("\n");
     }

    return 0;
}