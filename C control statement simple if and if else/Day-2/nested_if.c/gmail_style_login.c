#include<stdio.h>
#include<conio.h>
#include<string.h>

int main () {

    char user[20], pass[20], cap[20];

    printf("Enter a user name ");
    scanf("%s",&user);

    if(strcmp(user,"Ankush")==0)
    {
        printf("Enter password ");
        scanf("%s",pass);
        if(strcmp(pass,"Ank123")==0)
        {
            printf("enter captcha");
            scanf("%s",cap);
            if(strcmp(cap,"qwer#@")==0)
            printf("Welcome to Gmail");
            else{
            printf("Invalid captcha");
            }
        }
        else {
        printf("Invalid password");
        }
    }
    else {
       printf("Invalid username");
    }

       return 0;

}