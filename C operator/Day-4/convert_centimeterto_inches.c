#include<stdio.h>

void main(){
    int cen ;
    float inch;
    printf("Enter a num: ");
    scanf("%d",&cen);

    inch = cen * 0.3937 ;
    printf("%.4f", inch);
    
}