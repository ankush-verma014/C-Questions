#include<stdio.h>
int main () {

  float radius, height, surfacearea;

  printf("Enter the radius of the cylinder:");
  scanf("%f",&radius);

  printf("Enter the height of the cylinder :");
  scanf("%f",&height);

  surfacearea = 2 * 3.14159 * radius*radius  + 2 * 3.14159 * radius * height;

 printf("Radius: %.2f\n", radius);
 printf("Height: %.2f\n", height);
 printf("Surface Area: %.2f\n", surfacearea);

    return 0;
}