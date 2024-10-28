// Write a C program to given pattern.

//             *
//          *  *  *
//       *  *  *  *  *
//    *  *  *  *  *  *  *
// *  *  *  *  *  *  *  *  *

// #include <stdio.h>

// int main() {
//     int nr, r, c;

//     scanf("%d", &nr);

//     for (r = 1; r <= nr; r++) 
//     {
      
//         for (c = 1; c <= nr - r; c++) 
//         {
//             printf("   ");
//         }
        
//         for (c = 1; c <= (2 * r - 1); c++) 
//         {
//             printf("*  "); 
//         }
        
//         printf("\n");
//     }
  
//     return 0;
// }


#include<stdio.h>
int main() {
    for(int i=1;i<=5;i++)
    {
          for(int j=5-1; j>=i; j--)
          {
               printf("  ");
          }
           for(int k=1;k<=i;k++)
           {
                printf("* ");
           }
            for(int l=1;l<=i-1;l++)
            {
               printf("* ");
            }
          printf("\n");
     }

    return 0;
}
