#include <stdio.h>

int main() {
    char s[100];
    int i,length;
    printf("Enter a string: ");
    scanf("%s", s);
    
    for(i = 0; s[i] != '\0'; i++);

    printf("The count of alphabet is %d: ",i);
   

    return 0;
}
