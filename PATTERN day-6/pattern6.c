/*
        *       
      * * *    
    * * * * *   
  * * * * * * *    
* * * * * * * * *  
  * * * * * * *  
    * * * * *    
      * * *     
        *  
*/

#include <stdio.h>

int main(){
    int  nr,r,c;
    scanf("%d",&nr);

    for(r=1;r<=nr;r++)
    {
      for(c=1;c<=nr-r;c++){
        printf("  ");
      }
      for(int k=1;k<=2*r-1;k++){
        printf("* ");
      }
        printf("\n");
    }


 for(r = nr- 1; r >= 1; r--){
        for(c = 1; c <= nr - r; c++){
            printf("  ");
        }
        for(int k = 1; k <= 2 * r - 1; k++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}



// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int a[100], n, i;

//     printf("Enter the size of the array (1 to 100 only): ");
//     scanf("%d", &n);
//     if (n < 1 || n > 100) 
//     {
//         printf("Size must be between 1 and 100 only.\n");
//     } else 
//     {
//         printf("Enter %d integers:\n", n);
        
//         for (i = 0; i < n; i++) 
//         {
//             scanf("%d", &a[i]);
//         }

//         printf("Elements: ");
//         for (i = 0; i < n; i++) {
//             printf("%4d", a[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
