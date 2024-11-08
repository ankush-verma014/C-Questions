
// Write a C program to swap first and last character of given String.

// Sample input : "Welcome"
// Sample output : eelcomW

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length = 0;
   
    printf("Enter a string: ");
    scanf("%[^\n]", str);
  
    while (str[length] != '\0') {
        length++;
    }
   
    printf("\nThe length of the string is %d\n", length);

    for (int i = 0; i < length -1; i++) 
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
  
    printf("Modified string: %s\n", str);
    
    return 0;
}
