// Write C program to print given pattern.

// 1   2   3   4   5
// 6   7   8   9   10
// 11  12  13  14  15
// 16  17  18  19  20
// 21  22  23  24  25

#include <stdio.h>

int main() {
    int nr,nc,r,c,a=1;
    
    printf("Enter a number of rows and coloumn:");
    scanf("%d %d",&nr,&nc);
    
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nr;c++)
        {
            printf("%d ",a++);
        }
         printf("\n");
    }
        
       
         return 0;
    }
