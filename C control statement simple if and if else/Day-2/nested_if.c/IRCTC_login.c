#include <stdio.h>
// #include <conio.h>
#include <string.h>

int main() {
    char user[20], pass[20], cap[20];

    printf("Enter a user name: ");
    scanf("%s", user);

    printf("Enter a password: ");
    scanf("%s", pass);

    printf("Enter a captcha: ");
    scanf("%s", cap);

    if (strcmp(user, "Ankush") == 0) {
        if (strcmp(pass, "Ankush123") == 0) {
            if (strcmp(cap, "@qwa2") == 0) {
                printf("Welcome to IRCTC");
            } else {
                printf("Invalid captcha");
            }
        } else {
            printf("Invalid password");
        }
    } else {
        printf("Invalid user name");
    }

    return 0;
}