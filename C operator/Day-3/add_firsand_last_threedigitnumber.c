#include <stdio.h>
 
void main()
{
   int n,t,sum;
   printf("Enter a three digit number: ");
   scanf("%d", &n);
   t = n%10;
   sum = t;
   n= n/10;
   t= n/10; 
   sum = sum + t;
   printf("%d", sum); 
}
