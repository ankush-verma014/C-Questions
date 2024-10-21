/* Que 10 :
=======

Write C program to print given pattern.

1  1  1  2  1  3
2  1  2  2  2  3
3  1  3  2  3  3 
4  1  4  2  4  3  */

#include<stdio.h>

int main(){
    int r, c, nr, nc,a=1;
    
    scanf("%d %d", &nr, &nc);
    
    for(r=1; r<=nr; r++){
        for(c=1; c<=nc; c++){
           if(c%2==0){
               printf("%3d",a++);
           }else{
               printf("%3d",r);
           }
        }
       a=1; 
        
        printf("\n");
    }
       
        
        return 0;
    
    }