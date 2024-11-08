// Write a c program to print all the frequency of character present in string .

// Sample input: String s=" Hello Everyone"

// Sample output  :-
// The frequency of H is 1
// The frequency of e is 3
// The frequency of l is 2
// The frequency of o is 2
// The frequency of   is 1  --------THIS IS FOP CHECKING THE SPACE COUNT 
// The frequency of E is 1
// The frequency of v is 1
// The frequency of r is 1
// The frequency of y is 1
// The frequency of n is 1
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256]={0};
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]",str);
    for(i = 0; str[i] != '\0'; i++) 
    {
        freq[str[i]]++;
    }

    printf("Character frequencies:\n");
    for(i = 0; i < 256; i++) 
    {
        if(freq[i] != 0) 
        {
            printf("The frequency of '%c' is %d\n", i, freq[i]);
        }
    }

    return 0;
}
