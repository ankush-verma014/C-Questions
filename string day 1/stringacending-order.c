/*

Write a C program to sort the string data and print it.

Sample input : Enter a String : apple

Sample output  : After Sorting the String is : aelpp
*/

#include <stdio.h>

int main()
{

    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    int length = 0;

    for (int i = 0; str[length] != '\0'; i++)
    {
        length++;
    };

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (str[i] > str[j])
            {
                int tem = str[i];
                str[i] = str[j];
                str[j] = tem;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}