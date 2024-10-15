#include<stdio.h>
int main () {

    int n, count=0;

    printf("Enter a number:");
    scanf("%d",&n);

    while (n!=0)
    {
        n= n/10;
        count++;
    }
    if (n==0)
    {
        count++;
    }
    

    printf("Count of the digit is:%d",count);
    
}