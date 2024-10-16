#include<stdio.h>
int main() {

    int n,i,isprimenumber=1;

    printf("Enter a nuumber:");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("is a prime number");
    }
    else
    {
        for(i=2; i<=n/2; i++)
        {
            
            if(n%i==0)
            {
               isprimenumber=0;
               break;
            }
        }
    }

    if(isprimenumber)
    {
        printf("%d is a prime number",n);

    }
    else
    {
        printf("%d is not a prime number",n);
    }

    return 0;
}