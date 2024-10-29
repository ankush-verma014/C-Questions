// Given an array of integers, print Yes if the array length is 1 or more,and the first element and the 
// last elements both are equal else print "Not matching with the logic".
// Read the element from the user and while printing the ans print the array elements also 


// #include <stdio.h>

// int main() {
//     int n; 
   
//    printf("Enter how many array elements you wants ;");
//    scanf("%d",&n);
   
//    int a[n];
//    if(n>1){
   
//    for(int i=0;i<n;i++)
//    {
//        printf("enter the elements of index :%d : ",i);
//        scanf("%d",&a[i]);
       
//    }
//    for(int i=0;i<n;i++)
//    {
//        printf("elment at a[%d] = %d\n",i,a[i]);
//    }
//    if(a[0]==1 || a[n-1]==1||a[0]==a[n-1])
//    {
//        printf("Yes present");
//    }
//    else
//    {
//        printf("not present");
//    }
//    }
//    else 
//    {
//        printf("not a valid array creation");
//    }

//     return 0;
// }

#include <stdio.h>

int main() {
    int a[100], i, n;

    printf("Enter the number in range 1-100: ");
    scanf("%d", &n);

    if (n > 1) {
        printf("Yes, the length is greater than 1\n");
    }

    if (n < 1 || n > 100) {
        printf("Enter a number in the range 1-100\n");
    } else {
        printf("Enter %d integers: ", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

     
        if (a[0] == a[n - 1]) {
            printf("Both first and last elements are equal\n");
        } else {
            printf("Not equal\n");
        }

        for(i=0;i<n;i++){
            printf("Element at a[%d] is %d\n",i,a[i]);
        }
    }

    return 0;
}
