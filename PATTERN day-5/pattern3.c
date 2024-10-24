/*
Write C program to given pattern.

E  D  C  B  A
E  D  C  B
E  D  C  
E  D
E                                */



#include <stdio.h>

int main() {
    int n, i, j;
    char ch='A';
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        ch=ch+n-1;
        for(j=i; j<=n; j++){
            printf("%2c",ch--);
        }
        ch='A';
        printf("\n");
    }
    
    return 0;
}