#include<stdio.h>
#include<conio.h>

int main () {

    int pin, count;
    abc:

    printf("Enter a pin no :");
    scanf("%4d",&pin);

    if (pin == 1234)
        printf("welcome to PNB bank");
    
    else 
    {
        count++;
        if (count==3)
            printf("your card is blocked 24 hour's ");
            else 
               { printf("Invalid pin");
                goto abc;
               }
        
    }
    
}