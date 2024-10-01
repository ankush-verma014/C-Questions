#include<stdio.h>

int main(){
    int num1,num2  ;
    printf("Enter a number\n");
    scanf("%d %d",&num1,&num2);

    num1%2 == 0 && printf("%d is Even number.",num1) || printf("%d is an odd number", num1);
    num2%2 == 0 && printf("%d is Even number.", num2) || printf("%d is an odd number", num2);
}