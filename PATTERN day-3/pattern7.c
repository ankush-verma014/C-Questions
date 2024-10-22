// 1
// 3  5
// 5  7   9
// 7  9   11  13
// 9  11  13  15  17

#include <stdio.h>

int main() {
    int nr,r,c,b;
    scanf("%d",&nr);
  
  for(r=1;r<=nr;r++)
  {
      int a=2*r-1;
      for(c=1;c<=r;c++)
      {
         printf("%d ",a);
         a=a+2;
      }
      printf("\n");
  }

    return 0;
}
