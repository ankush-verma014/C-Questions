// An automorphic number is a number whose square ends in the same digits as the number itself. 
// For example, 5, 6, and 25 are automorphic numbers because:

// 5×5=25 (last digit is 5)

// 6×6=36 (last digit is 6)

// 25×25=625 (last digits are 25)


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


