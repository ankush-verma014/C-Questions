// Write C program to given pattern.

// 1   2   3   4   5
// 6   7   8   9
// 10  11  12  
// 13  14
// 15

#include <stdio.h>

int main() {
     int nr,r,c,a=1;
     
     scanf("%d",&nr);
     
     for(r=nr;r>=1;r--)
     {
         for(c=1;c<=r;c++)
         {
             printf("%d  ",a++);
         }
         printf("\n");
     }

    return 0;
}
