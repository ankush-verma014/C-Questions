#include <stdio.h>

int main() {
    char name[100];
    int age;

    
    printf("Enter your name: ");
    scanf("%s",&name);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf(" %s : you are eligible to vote.\n", name);
    } else {
        printf("%s :Sorry you are not eligible to vote.\n", name);
    }

    return 0;
}
