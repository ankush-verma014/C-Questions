// PrintTable
// Write a simple C program that reads an integer from the user and prints the multiplication table of the given number using a while loop.
// Sample Input
// 5
// Sample Output
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// .....
// .....
// 5 x 10 = 50

#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= 10) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
