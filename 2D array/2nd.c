// Write a C program that performs the addition of two square matrices of the same size. 
// The program should first ask for the size of the matrix , then prompt the user to input elements for both matrices. 
// After the matrices are entered, the program should display both matrices and their sum.

// Sample input :

// Input the size of the square matrix : 2
// Input elements in the first matrix:
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4

// Input elements in the second matrix:
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8


// Sample output :

// The First matrix is:
// 1 2
// 3 4

// The Second matrix is:
// 5 6
// 7 8

// The Addition of two matrices is:
// 6 8
// 10 12
#include <stdio.h>

int main() {
    int row,col,n;
    
    printf("Enter the size of an square matrix :");
    scanf("%d",&n);
    
    int a[n][n];
     int b[n][n];
     int c[n][n];
    printf("Input elements in the first matrix: \n");
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("Element - [%d][%d]: ",row,col);
            scanf("%d",&a[row][col]);
        }
    }
    
     printf("Input elements in the second matrix: \n");
        for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("Element - [%d][%d]: ",row,col);
            scanf("%d",&b[row][col]);
        }
    }
    
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            c[row][col]=a[row][col]+b[row][col];
        }
    }
    
    printf("the first matrix is: \n");
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("%2d",a[row][col]);
        }
        printf("\n");
    }
     printf("the second matrix is: \n");
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("%2d",b[row][col]);
        }
        printf("\n");
    }
    printf("The Addition of two matrices is: \n");
      for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("%3d",c[row][col]);
        }
        printf("\n");
    }

    return 0;
}