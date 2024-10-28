// Write a C program to given pattern.

//             1
//          3  2  1
//       5  4  3  2  1
//    7  6  5  4  3  2  1
// 9  8  7  6  5  4  3  2  1

#include <stdio.h>

int main(){
    int nr;
    
    scanf("%d",&nr);

    for(int r=1;r<=nr;r++)
    {
        for(int c=1;c<=nr-r;c++)
        {
            printf("  ");
        }
         int a=2*r-1;
        for(int c=1;c<=2*r-1;c++)
        {
            printf("%d ", a--);
        }
       
        printf("\n");
    }

    return 0;
}