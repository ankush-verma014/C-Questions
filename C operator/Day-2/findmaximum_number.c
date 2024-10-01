// Sample input : int a=10, b=20;
// Sample output : 20

#include<stdio.h>

void main(){
    int a=10,b=5;
    a>b && printf("a is big") || b>a && printf("b is big") || printf("both are equal"); 
}
