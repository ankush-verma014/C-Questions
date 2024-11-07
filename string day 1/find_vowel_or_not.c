#include <stdio.h>

int main(){
    char str[100];
    int f=0;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for(int i=0;str[i]!='\0';i++){
        char ch = str[i];
         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            f=1;
        }
    }
    if(f==1){
        printf("This string contains vowel. ");
    }else{
        printf("There is no vowel present in this string.");
    }
   
    return 0;
}