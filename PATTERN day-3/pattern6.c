// 1
// 1  2
// 1     3
// 1        4
// 1  2  3  4  5


#include <stdio.h>

int main() {
    int nr,r,c,b;
    scanf("%d",&nr);
  
  for(r=1;r<=nr;r++)
  {
      for(c=1;c<=r;c++)
      {
          if(r==1||r==nr|| c==1||c==r)
          {
               printf("%2d",c);
          }
          else
          {
              printf("  ");
          }
      }
      printf("\n");
  }

    return 0;
}