// Given an array of integer,print Yes if 15 appears as either the first or last element in the array
// else print Not present.
// The array will be length 1 or more if not print invalid array creation.

// Read the element from the user and while printing the ans print the array elements also 

#include <stdio.h>

int main() {
    int n; 
   
   printf("Enter how many array elements you wants ;");
   scanf("%d",&n);
   
   int a[n];
   if(n>1){
   
   for(int i=0;i<n;i++)
   {
       printf("enter the elements of index :%d : ",i);
       scanf("%d",&a[i]);
       
   }
   for(int i=0;i<n;i++)
   {
       printf("elment at a[%d] = %d\n",i,a[i]);
   }
   if(a[0]==15 || a[n-1]==15)
   {
       printf("Yes present");
   }
   else
   {
       printf("not present");
   }
   }
   else 
   {
       printf("not a valid array creation");
   }

    return 0;
}
