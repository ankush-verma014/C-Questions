#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }
    if (ch >= 'a' && ch <= 'z') {
        printf("%c: lowercase",ch);
    }


    return 0;
}

    
