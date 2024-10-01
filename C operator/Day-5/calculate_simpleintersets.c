#include<stdio.h>
int main () {

    float principalamount, interestrate, time, simpleintreste;

    printf("Enter a principle amount is :");
    scanf("%f",&principalamount);

     printf("Enter a interest rate is :");
    scanf("%f",&interestrate);
    interestrate= interestrate/100;

     printf("Enter a time in years is :");
    scanf("%f",&time);

    simpleintreste = principalamount*interestrate*time;

    printf("simple intrest is %.2f\n",simpleintreste); 


}