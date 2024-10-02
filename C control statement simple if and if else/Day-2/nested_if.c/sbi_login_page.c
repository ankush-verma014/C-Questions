#include<stdio.h>
#include<conio.h>
#include<string.h>

int main () {

    char user[20], pass[20], cap[20];

    printf("Enter a user name ");
    scanf("%s",&user);

    printf("Enter password ");
    scanf("%s",pass);

    printf("enter captcha");
     scanf("%s",cap);

    if(strcmp(user,"Ankush")==0 && strcmp(pass,"ank23")==0 &&
    strcmp(cap,"qwerty")==0) printf("Welcome tp SBI NET BANKING");

    else {
       printf("Invalid user name / password/ captcha");
    }

       return 0;

}