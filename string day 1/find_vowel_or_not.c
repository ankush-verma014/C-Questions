#include<stdio.h>
int main () {
    char s[100];
    int i,vowel;
    
    printf("Enter a String:");
    scanf("%[^\n]",s);
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        
          vowel=1;
        }
       
    }
    if(vowel==1)
       {
            printf("This is a vowel string");
        }
    
     else
        {
            printf("This is not a vowel string");
        }
}