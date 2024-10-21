// Write C program to print given pattern.

// *  *  *  *  * 
// *  *  *  *  * 
// *  *  *  *  * 
// *  *  *  *  * 
// *  *  *  *  * 


#include <stdio.h>

int main() {
    int nr,r,c;
    
    printf("Enter a number of rows:");
    scanf("%d",&nr);
    
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nr;c++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}