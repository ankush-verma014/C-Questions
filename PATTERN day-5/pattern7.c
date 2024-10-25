
// *                   * 
// * *               * * 
// * * *           * * * 
// * * * *       * * * * 
// * * * * *   * * * * * 
// * * * *       * * * * 
// * * *           * * * 
// * *               * * 
// *                   *   

#include <stdio.h>

int main() {
    int nr;
    
    scanf("%d",&nr);
    
       for(int r=1; r<=nr; r++){
            for(int c=1; c<=r; c++){
                printf("* ");
            }
              for(int s=r; s<=nr; s++){
                printf("  ");
            }
              for(int s=r; s<nr; s++){
                printf("  ");
            }
            for(int c=1; c<=r; c++){
                printf("* ");
            }
            printf("\n");
        }
         for(int r=1; r<nr; r++){
          
            for(int c=r; c<nr; c++){
                printf("* ");
            }
               for(int s=1; s<=r; s++){
                printf("  ");
            }
              
               for(int s=0; s<=r; s++){
                printf("  ");
            }
           for(int c=r; c<nr; c++){
                printf("* ");
            }
            printf("\n");
        }
    return 0;
}