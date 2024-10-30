// Given 2 arrays of integers, a and b, print Yes if they have the same first element or they have the 
// same last element else not Present. Both arrays will be length 1 or more if not print Invalid 
// array declaration.

// Read the element from the user and while printing the ans print the array elements also 

#include<stdio.h>
int main(){
    int n, arr1[100], arr2[100];
    scanf("%d", &n);

    if(n < 1)
    {
        printf("Invalid array");
    }

    printf("Enter the elements for 1st Array\n");
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements for 2nd Array\n");
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    if(arr1[0] == arr2[0] || arr1[n-1] == arr2[n-1])
    {
        printf("Yes\n");
    }
    else 
    {
        printf("No\n");
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}