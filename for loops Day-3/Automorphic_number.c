#include <stdio.h>
#include<math.h>
int main() {
   
   int num,Automorp,l=0;

    scanf("%d",&num);//5

    int square = num * num;//25
    int temp = num;//5
   while(temp!=0)
   {
    l++;
    temp/=10;
   }
    int p=pow(10,l);
   
  printf(square%p==num?"Automorphic Number":"Not a Automorphic Number");
    return 0;
}