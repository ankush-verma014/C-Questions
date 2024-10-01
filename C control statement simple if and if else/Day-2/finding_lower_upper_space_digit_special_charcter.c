#include<stdio.h>
int main () {

    char ch;

    printf("Enter any character:");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')
    {
        printf("%c : it is a lowercase charcter \n",ch);
    }

    else if (ch>='A' && ch<='Z')
    {
        printf("%c : it is a uppercase charcter \n",ch);
    }

    else if (ch>='0' && ch<='9') 
    {
        printf("%c: it is a digit number \n",ch);

    }

    else if (ch== ' ')
    {
        printf("%c: it is a space charcter \n");

    }

    else {
        printf("%c: it is a special charcter");
    }
    
    
    
}