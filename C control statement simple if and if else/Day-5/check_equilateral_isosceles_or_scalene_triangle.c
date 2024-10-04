#include <stdio.h>

int main() {
    float side1, side2, side3;
    int triangleType;

    printf("Enter the lengths of the sides of the triangle:\n");

    printf("Side 1: ");
    scanf("%f", &side1);

    printf("Side 2: ");
    scanf("%f", &side2);

    printf("Side 3: ");
    scanf("%f", &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("Invalid input: Side lengths must be positive numbers.\n");
        return 1;
    } 
    else if (side1 == side2 && side2 == side3) 
    {
        triangleType = 1;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) 
    {
        triangleType = 2;
    } else 
    {
        triangleType = 3;
    }

    switch (triangleType) 
    {
        case 1:
            printf("The triangle is an equilateral triangle.\n");
            break;
        case 2:
            printf("The triangle is an isosceles triangle.\n");
            break;
        case 3:
            printf("The triangle is a scalene triangle.\n");
            break;
        default:
            printf("Error in determining triangle type.\n");
            break;
    }

    return 0;
}