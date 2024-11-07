#include <stdio.h>
#include<ctype.h>
int main() {
    char s[100];
    int i, vowels = 0, consonants = 0, digits = 0, special = 0;
   
    printf("Enter a string: ");
    scanf(" %[^\n]", s); 
    

    for(i = 0; s[i] != '\0'; i++) 
    {
        if(isalpha(s[i])) 
        {
        
            char ch = tolower(s[i]);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            } else 
            {
                consonants++;
            }
        } else if(isdigit(s[i])) 
        {
            digits++;
        } else 
        {
            special++;
        }
    }
    
    printf("Vowel count is : %d\n", vowels);
    printf("Consonant count is : %d\n", consonants);
    printf("Digit count is : %d\n", digits);
    printf("Special Character count is : %d\n", special);
    
    return 0;
}