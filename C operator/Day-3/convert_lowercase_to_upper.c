#include<stdio.h>

void main(){
    char lower, upper;
    printf("Enter a charcter: ");
    scanf("%c", &lower);
    upper = lower - 32;
    printf("%c",upper);
}
