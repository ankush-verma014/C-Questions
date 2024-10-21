// Write C program to print given pattern.

// 1  2  3  4  5
// 2  3  4  5  6
// 3  4  5  6  7
// 4  5  6  7  8
// 5  6  7  8  9

#include <stdio.h>

int main() {
    int nr,nc,r,c,a=1;
    
    printf("Enter a number of rows and coloumn:");
    scanf("%d %d",&nr,&nc);
    
    for(r=1;r<=nr;r++)
    {
        a=r;
        for(c=1;c<=nr;c++)
        {
            printf("%d ",a++);
        }
         printf("\n");
    }
        
       
         return 0;
    }