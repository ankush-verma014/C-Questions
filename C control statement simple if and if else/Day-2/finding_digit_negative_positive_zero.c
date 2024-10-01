#include<stdio.h>
int main () {

    int n;

    printf("enter a number:\n");
    scanf("%d",&n);

    if(n>=1)
    {
        printf("%d : it is a positive number",n);
    }

    else if(n<=1)
    {
        printf("%d : it is a negative number",n);
    }
    
    else 
    {
        printf("%d : it is a zero",n);
    }

       return 0;
}