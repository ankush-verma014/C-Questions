// #include <stdio.h>
// #include <math.h>

// int isAutomorphic(int num) {
//     int square = num * num;
//     while (num > 0) {
//         if (num % 10 != square % 10) 
//         {
//             return 0;
//         }
//         num /= 10;
//         square /= 10;
//     }
//     return 1;
// }

// int main() 
// {
//     int number;
//     printf("Enter an integer number: ");
//     scanf("%d", &number);

//     if (isAutomorphic(number)) 
//     {
//         printf("%d is an automorphic number.\n", number);
//     } else 
//     {
//         printf("%d is not an automorphic number.\n", number);
//     }

//     return 0;

#include<stdio.h>
int main () {

    int num, pro, lastdigitnum, lastdigitpro,tem;

    printf("Enter a number:");
    scanf("%d",&num);

    pro= num * num;
    tem = num;

    while (tem>0)
    {
        lastdigitnum= tem % 10;
        lastdigitpro= pro % 10;

        if (lastdigitnum != lastdigitpro)
        {
            printf("%d It is not a automorphic number.\n",num);
            return 0;
        }

        tem= tem/10;
        pro= pro/10;
        
    }

    printf("%d is a Automorphic number.",num);
    return 0;
    
}
