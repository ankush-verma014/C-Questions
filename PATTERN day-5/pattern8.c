// Fibonacci series Pattern (right angle triangle)
// ______________________________________________
//    1
//    1   2
//    3   5   8
//   13  21  34  55
//   89 144 233 377 610

int main() {
   int a=0,b=1,sum=0,count=10;
    sum=a+b;
     
       for(int i=1;i<=5;i++){
             for(int j=1;j<=i;j++){
            printf("%4d",sum);
            sum=a+b;
            a=b;
            b=sum;
           
       }
     
       printf("\n");
       }
    return 0;
}