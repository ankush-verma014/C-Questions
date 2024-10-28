// Write a C program to given pattern.


//             1
//          2  1  2
//       3  2  1  2  3
//    4  3  2  1  2  3  4

// Online C compiler to run C program online

#include<stdio.h>
int main() {
    int a,b=2,nr;
    scanf("%d",&nr);
    
    for(int r=1;r<=nr;r++)
    {
        a=r;
          for(int c=nr-1; c>=r; c--)
          {
              
               printf("  ");
          }
           for(int c=1;c<=r;c++)
           {
                printf("%d ",a--);
           }
           
            for(int k=1;k<=r-1;k++)
            {
               
               printf("%d ",b++);
            }
            b=2;
          printf("\n");
     }

    return 0;
}