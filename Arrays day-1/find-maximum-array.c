// Given an array of integers length 3, figure out which is larger element in that array and 
// return the largest element with the help of the method ?

// Write that type of code so that it can accept any order change value and print the exact 
// output 

// For Example : Test Case Input:
//             |-  int arr[]={13,5,8}
//                    > 13 is largest 
//             |-  int arr[]={15,55,43}
//                    > 45 is largest
//             |-  int arr[]={60,12,103};
//                    > 103 is largest 

#include<stdio.h>
int main(){
    int n=3, arr[100];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1] && arr[0] > arr[2])
    {
        printf("%d is greater", arr[0]);
    }
    else if(arr[1] > arr[2])
    {
        printf("%d is greater", arr[1]);
    }
    else
    {
        printf("%d is greater", arr[2]);
    }

    return 0;
}