
#include<stdio.h>
int main () {
    float totalbill;
    int people , amount;

    printf("Enter a total bill amount\n");
    scanf("%f", &totalbill);

    printf("Enter a number of people");
    scanf("%d", &people);

    amount = totalbill/people;

    printf("%d: amount of each person needs to pay \n",amount);

    return 0;

}