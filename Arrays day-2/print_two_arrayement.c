// Given 2 integer arrays, a and b, each length is 3, print a new array length 2
// containing their middle elements.

// Print the old array and the new array element

#include <stdio.h>

int main(){
    int a[3]={1,2,3};
    int b[3]={1,4,3};

    int new_array[2]={a[1],b[1]};

   for(int i=0;i<2;i++){
    printf("%d ",new_array[i]);
   }
    return 0;
}