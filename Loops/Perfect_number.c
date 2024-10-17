#include<stdio.h>
int main() {

    int n,i,sum=0;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum=sum + i;
        }
    }

    if (n==sum)
    {
        printf("%d: is a perfect number",sum);
    }
    else
    {
        printf("is not a perfect number",sum);
    }
    
}