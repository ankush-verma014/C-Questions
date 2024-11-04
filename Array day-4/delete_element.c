// Write a C program to delete a given element from an array.

// Sample input :
// Enter the number of elements in the array: 8
// Enter 8 elements : 10 20 30 30 30 40 50 30
// Enter the element to be deleted: 30

// Sample output :
// Array after deletion: 10 20 40 50

#include<stdio.h>
int main () {
    int n;
    printf("Enter a array size:");
    scanf("%d",&n);
    
    printf("Enter %d integer:",n);
    int arr[n],i,j,ele,f=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a element to delete:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            for(n--,f=1,j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
                i--;
            }
        }
    }
    if(f==0)
    {
        printf("\n%d not found",ele);
        
    }
    else
    {
        puts("Element are");
        for(i=0;i<n;i++)
        {
            printf("%3d",arr[i]);
        }
    }
    return 0;
}