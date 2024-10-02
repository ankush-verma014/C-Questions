// GradingManagement
// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
// Calculate percentage and grade according to following:


// Percentage >= 90% : Grade A

// Percentage >= 80% : Grade B

// Percentage >= 70% : Grade C

// Percentage >= 60% : Grade D

// Percentage >= 40% : Grade E

// Percentage < 40% : Grade F


// Sample input :

// Enter marks of Physics: 85
// Enter marks of Chemistry: 78
// Enter marks of Biology: 92
// Enter marks of Mathematics: 88
// Enter marks of Computer: 95

#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total, percentage;
    char grade;

    printf("Enter marks of Physics: ");
    scanf("%f", &physics);
    printf("Enter marks of Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks of Biology: ");
    scanf("%f", &biology);
    printf("Enter marks of Mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter marks of Computer: ");
    scanf("%f", &computer);

    total = physics + chemistry + biology + mathematics + computer;
    percentage = (total / 500) * 100;

    if (percentage >= 90)
    {
        grade = 'A';
    } 
     else if (percentage >= 80) 
    {
        grade = 'B';
    } else if (percentage >= 70)
    {
        grade = 'C';
    } else if (percentage >= 60) 
    {
        grade = 'D';
    } else if (percentage >= 40) 
    {
        grade = 'E';
    } else {
        grade = 'F';
    }
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
