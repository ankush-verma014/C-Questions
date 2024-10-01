#include<stdio.h>
int main () {

    int a,b;

    printf("Enter number a:");
    scanf("%d",&a);

     printf("Enter number b:");
    scanf("%d",&b);

    if (a>b)
    {
        printf("%d :\n a is a big number",a);
    }
     else {
        printf("%d : b is a big number",b);
    }

    return 0;
    
}