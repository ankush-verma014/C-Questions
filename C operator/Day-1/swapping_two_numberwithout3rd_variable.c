#include<stdio.h>

void main(){
    int a =10, b=20;
      
    a = a+b;
    b= a-b;
    a = a-b;
    printf("a=%d b=%d", a, b);
  
}
