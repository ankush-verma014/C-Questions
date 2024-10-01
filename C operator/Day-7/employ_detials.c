#include<stdio.h>
int main()
{
    char Name[20],Designation[50];
    int ID , Salary;
    printf("Enter employee Name: ");
    scanf("%s",Name);
    printf("Enter employee ID: ");
    scanf("%d",&ID);
    printf("Enter employee Designation:");
    scanf("%s",Designation);
    printf("Enter employee Salary:");
    scanf("%d",&Salary);

    printf("Employee Details\n");
    printf("Name: %s\n",Name);
    printf("Employee ID: %d\n",ID);
    printf("Designation: %s\n",Designation);
    printf("Salary:$ %d\n",Salary);
       return 0;
}