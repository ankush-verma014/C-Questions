// Write a C program that computes the transpose of a given matrix. 
// The program should first prompt the user to input the dimensions (rows and columns) of the matrix, followed by the elements of the matrix. 
// After obtaining the matrix, the program should display both the original matrix and its transpose.

// Sample input:
// Input the rows and columns of the matrix: 2 2
// Input elements in the matrix:
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4


// Sample output :
// The matrix is:
// 1 2
// 3 4

// The transpose of the matrix is:
// 1 3
// 2 4

// Solve:

#include <stdio.h>

int main() {
    int nr, nc, r, c;
  
    printf("Input the rows and columns of the matrix: ");
    scanf("%d %d", &nr, &nc);
    
    int arr[nr][nc];
    
    printf("Input elements in the matrix:\n");
    for (r = 0; r < nr; r++) {
        for (c = 0; c < nc; c++) {
            printf("Element - [%d][%d]: ", r, c);
            scanf("%d", &arr[r][c]);
        }
    }
    printf("The matrix is:\n");
    
     for (r = 0; r < nr; r++) 
     {
        for (c = 0; c < nc; c++) {
            
            printf("%4d", arr[r][c]);
        }
        printf("\n");
    }
    
    printf("\nThe transpose of the matrix is:\n");
    for (c = 0; c < nc; c++) {
        for (r = 0; r < nr; r++) {
            printf("%4d", arr[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}

