// #include <stdio.h>
// #include<ctype.h>
// int main() {
//     char s[100];
//     int i, vowels = 0, consonants = 0, digits = 0, special = 0;
   
//     printf("Enter a string: ");
//     scanf(" %[^\n]", s); 
    

//     for(i = 0; s[i] != '\0'; i++) 
//     {
//         if(isalpha(s[i])) 
//         {
        
//             char ch = tolower(s[i]);
//             if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
//             {
//                 vowels++;
//             } else 
//             {
//                 consonants++;
//             }
//         } else if(isdigit(s[i])) 
//         {
//             digits++;
//         } else 
//         {
//             special++;
//         }
//     }
    
//     printf("Vowel count is : %d\n", vowels);
//     printf("Consonant count is : %d\n", consonants);
//     printf("Digit count is : %d\n", digits);
//     printf("Special Character count is : %d\n", special);
    
//     return 0;
// }

#include <stdio.h>

int main()
{
    int vol=0,col=0,sp=0,spec=0,digit=0;
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    
    
    // int length = 0;

    // for (int i = 0; str[length] != '\0'; i++)
    // {
    //     length++;
    // };
    
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='A'&&str[i]<='Z'){
          if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
              vol++;
          }else{
              col++;
          }
        }else if(str[i]>='a'&& str[i]<='z'){
           if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
              vol++;
          }else{
              col++;
          }
        }else if(str[i]==' '){
            sp++;
        }else if(str[i]>='0'&&str[i]<='9'){
            digit++;
            }else{
            spec++;
        }
    }
    
    printf("vowel= %d\nconsonant= %d\nspace= %d\nspecial character= %d\nDigit= %d",vol, col, sp, spec,digit);
    
    return 0;
}