#include<stdio.h>

int main(){
    int radius, side, square;
    float area;

    printf("Enter radius of Circle: ");
    scanf("%d", &radius);

    printf("Enter side of square: ");
    scanf("%d", &side);

    area = 3.14 * radius * radius;
    square = side * side;

    printf("Area of Circle is: %.2f\n", area);
    printf("Area of Square is: %d\n", square);

    return 0;
}
