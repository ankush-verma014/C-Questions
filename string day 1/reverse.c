// #include <stdio.h>

// int main() {
//     char s[100];
//     int i;
//     printf("Enter a string: ");
//     scanf("%s", s);
    
//     for(i = 0; s[i] != '\0'; i++);

//     printf("Reverse: ");
//     while(i) 
//     {
//         printf("%c", s[--i]);
//     }

//     return 0;
// }

                            //      OR
                            // _________________

  #include <stdio.h>

int main() {
    char s[100];
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    
    for(i = 0; s[i] != '\0'; i++);

    printf("Reverse: ");
    while(i) 
    {
        printf("%c", s[--i]);
    }

    return 0;
}                          

