#include<stdio.h>
int main() {

    int n, i , cube=0;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        cube=i*i*i;
        printf("Number is :%d and cube of the %d is:%d\n",i,i,cube);
    }

}