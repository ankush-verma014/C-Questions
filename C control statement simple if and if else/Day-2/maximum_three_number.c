#include<stdio.h>
int main () {

    int a, b, c;

    printf("Enter a number :");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && a==c)
    {
        printf("both are equal");
    }

    else if(a>b && a>c)
    {
        printf("a is a big number",a);
    }

    else if(a==b && a>c)
    {
        printf("a & b are big");
    }

    else if(b==c && b>a)
    {
        printf("b & c are big");
    }

    else if(a==c && a>c)
    {
        printf("a & c are big");
    }

    else if(b>c)
    {
        printf("b is big");
    }

    else
    {
        printf("c is  big");
    }

    return 0;
}