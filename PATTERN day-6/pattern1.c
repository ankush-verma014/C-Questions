// Write a C program to given pattern.

//             *
//          *  *  *
//       *  *  *  *  *
//    *  *  *  *  *  *  *
// *  *  *  *  *  *  *  *  *

#include <stdio.h>

int main() {
    int nr, r, c;

    scanf("%d", &nr);

    for (r = 1; r <= nr; r++) 
    {
      
        for (c = 1; c <= nr - r; c++) 
        {
            printf("   ");
        }
        
        for (c = 1; c <= (2 * r - 1); c++) 
        {
            printf("*  "); 
        }
        
        printf("\n");
    }
  
    return 0;
}