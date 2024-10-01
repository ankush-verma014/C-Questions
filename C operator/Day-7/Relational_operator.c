#include<stdio.h>

int main(){
    int x;
   int  y;

   printf("Enter x and y value: ");
   scanf("%d %d",&x, &y);

   printf("x == y = %d\n", x == y);
   printf("x != y = %d\n", x != y);
   printf("x > y = %d\n", x > y);
   printf("x<y = %lu\n",  x<y );
   printf("x >= 1 = %d\n", x>=1);
   printf("x <= 1 = %d\n", x<=1);

    return 0;
}