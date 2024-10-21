// Write C program to print given pattern.

// 5  5  5  5  5
// 4  4  4  4  4
// 3  3  3  3  3  
// 2  2  2  2  2

#include <stdio.h>

int main() {
    int nr,r,c;
    
    printf("Enter a number of rows:");
    scanf("%d",&nr);
    
    for(r=nr;r>=2;r--)
    {
        for(c=1;c<=nr;c++)
        {
            printf("%d ",r);
        }
        
        printf("\n");
    }

    return 0;
}