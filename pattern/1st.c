#include<stdio.h>

int main(){
    int nr,nc,i,j;

    printf("Enter no. of row and col.: ");
    scanf("%d %d",&nr,&nc);

    for(i=1; i<=nr; i++){
        int a=65,b=97;
        for(j=1; j<=nc; j++){
            printf("%c%c ",a++,b++);
        }
        printf("\n");
    }
    
    return 0;
}