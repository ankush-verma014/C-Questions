#include<stdio.h>

void main(){
    int n =25,rem;
    rem = n%10;
    n= n/10;
    rem>=5 && printf("%d",(n+1)*10) || n<5 && printf("%d", n*10);
 
    // printf("%d", ((a%10)/5 + a/10)*10);
}
