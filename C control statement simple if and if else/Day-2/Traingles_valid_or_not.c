#include <stdio.h>

int main(){
    int side1;
    int side2;
    int side3;
    printf ("Enter the length of all the three sides of the triangle :");
    scanf("%d %d %d",&side1,&side2,&side3);

    if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
    {
        printf("The Triangle is valid");
    }
else
    {
        printf("The Triangle is not valid");
    }

}