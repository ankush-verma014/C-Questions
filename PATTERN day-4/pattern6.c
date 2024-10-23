// Write a C program to print given pattern.

// 1  2  3  4  5
// 2  2  3  4  5
// 3  3  3  4  5
// 4  4  4  4  5
// 5  5  5  5  5


#include<stdio.h>
int main() {
    
    int nr,r,c;
    scanf("%d",&nr);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<r;c++)
        {
            printf("%d ",r);
        }
        for(c=r;c<=nr;c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}