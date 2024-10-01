#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; 
    }

    printf("Converted character: %c\n", ch);

    return 0;
}