// Write a C program to sort a given array in ascending order. 
// The program should use the bubble sort algorithm to compare adjacent elements and swap them if they are in the wrong order.
// After sorting, the program should print the original array and the sorted array.

// Sample input : 
// Array: {64, 25, 12, 22, 11}

// Sample output :
// Original array: 64 25 12 22 11 
// Sorted array in ascending order: 11 12 22 25 64

// Solve:

// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n;
   printf("Enter a array size:");
   scanf("%d",&n);
   
   printf("enter %d integer:",n);
   int arr[n],i,j,t;
   
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("orignial array:");
   for(i=0;i<n;i++)
   {
       printf("%3d",arr[i]);
   }
   for(i=0;i<=n-2;i++){
   for(j=0;j<=n-i-2;j++)
   {
       if(arr[j]>arr[j+1])
       {
           t=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=t;
       }
   }
   }
   printf("\nsorted Element ");
   for(i=0;i<n;i++)
   {
       printf("%3d",arr[i]);
   }

    return 0;
}