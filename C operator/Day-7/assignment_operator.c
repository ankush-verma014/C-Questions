#include<stdio.h>

int main(){
    int a;
   int  b;

   printf("Enter a and b value: \n");
   scanf("%d %d",&a, &b);

   printf("a += b = %d\n", a += b);
   printf("a -= b = %d\n", a -= b);
   printf("a *= b = %d\n", a *= b);
   printf("a/=b = %lu\n",  a/=b );
   printf("a %% b = %d\n", a%1);

    return 0;
}