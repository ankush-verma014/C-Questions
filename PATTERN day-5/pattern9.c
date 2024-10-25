// Fibonacci series patter if the row will 
// always start from same way 

//        0 
//        0  1
//        0  1  1
//        0  1  1  2
//        0  1  1  2  3

#include <stdio.h>
int main() {
   int a=0,b=1,sum=0,count=10;

       for(int i=1;i<=5;i++){
             for(int j=1;j<=i;j++){
                 a=b;
                 b=sum;
           
            printf("%4d",sum);
            sum=a+b;
            
           
       }
       a=0,b=1,sum=0;
       printf("\n");
       }
    return 0;
}