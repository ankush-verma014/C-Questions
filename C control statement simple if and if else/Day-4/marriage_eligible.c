#include<stdio.h>
int main()
{
    char name[10],gender,nationality;
    int age;
    printf("Nationality India as (I or i): ");
    scanf("%c",&nationality);
    printf("Enter Name: ");
    scanf("%s",&name);
    printf("Age: ");
    scanf("%d",&age);
    printf("Gender( M (male), F (female)): ");
    scanf("%s",&gender);

        if(!(nationality == 'I' || nationality =='i')){
        printf("Indian citizens only");
    }
    if(nationality == 'I' || nationality =='i'){
        if(age>=21 && age<=50 && (gender == 'M' || gender == 'm')|| (age>=18 && age<=45 && (gender == 'F' || gender == 'f'))){
        printf("Congratulations! you are Eligible for marriage.\n");
    }
    else if(!(gender == 'M' || gender == 'm')&&(gender == 'F' || gender == 'f')){
        printf(" Sorry! you are Not Eligible for marriage.\n");}
    else{
        printf("Invalid entry.\n");
    }
    }

    return 0;
}