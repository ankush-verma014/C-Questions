#include<stdio.h>
int main (){
    char s[100];
    int i,v=0,c=0,spe=0,d=0,spa=0;
    
    printf("Enter a string:");
    scanf("%[^\n]",s);
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        else if(s[i]>='A'&& s[i]<='Z')
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            d++;
        }
        else if(s[i]==' ')
        {
            spa++;
        }
        else
        {
            spe++;
        }
    }
    
    printf("vowel=%d\n",v);
    printf("Consonant=%d\n",c);
    printf("digit=%d\n",d);
    printf("space=%d\n",spa);
    printf("special=%d\n",spe);
    
    return 0;
}