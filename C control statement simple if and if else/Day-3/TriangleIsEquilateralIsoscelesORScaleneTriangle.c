// TriangleIsEquilateralIsoscelesORScaleneTriangle
// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
  
//          Validity Check:
//          If all three sides are equal then the triangle is equilateral.
//          If exactly two sides are equal then the triangle is isosceles.
//          If all sides are different then the triangle is scalene

#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &side1);
    printf("Side 2: ");
    scanf("%d", &side2);
    printf("Side 3: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3)
     {
        printf("The triangle is equilateral.\n");
     } else if (side1 == side2 || side2 == side3 || side1 == side3)
     {
        printf("The triangle is isosceles.\n");
     } else 
     {
        printf("The triangle is scalene.\n");
     }

    return 0;
}