#include<stdio.h>

void main(){
    int a,b,c;
    printf("enter the value of a , b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    a>b && a>c && printf(" it is big number %d",a) || 
    b>a && b>c && printf(" it is big number %d", b)||
    c>a && c>b && printf(" it is big number %d",c) ;

}