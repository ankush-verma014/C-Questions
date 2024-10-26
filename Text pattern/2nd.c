// Write C program to print given pattern.

// 0  1  0  1  0
// 1  0  1  0  1
// 0  1  0  1  0
// 1  0  1  0  1
// 0  1  0  1  0

// Solve:

#include <stdio.h>

int main() {
    int nr,nc,r,c;
    
    printf("Enter a number of rows and coloumn:");
    scanf("%d %d",&nr,&nc);
    
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        {
            if((r+c)%2==0)
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