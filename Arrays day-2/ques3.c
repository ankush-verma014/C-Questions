/*
Que-3)
_________________
Given an array of integer , print a new array length 2 containing the first and
last elements from the original array. The original array will be length 1 or more
otherwise print not a valid declaration ?

*/

#include<stdio.h>

int main(){
    int a[3]={1,2,3};
    int b[3]={5,6,7};
    int c[] ={a[0],b[3-1]};
    
    printf("Old array: \n");
    for(int i=0; i<3; i++){
        printf("%2d",a[i]);
    }
    printf("\n");
     for(int i=0; i<3; i++){
        printf("%2d",b[i]);
    }
    
    printf("\nNew Array: \n");
    for(int i=0; i<2; i++){
        printf("%2d",c[i]);
    }
    
    return 0;
}