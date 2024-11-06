// Write a program in C to find the sum of the horizontal diagonal of a matrix.

// Sample input :
// Input the size of the square matrix : 3
// Input elements in the 3x3 matrix:
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [0],[2] : 3
// element - [1],[0] : 2
// element - [1],[1] : 4
// element - [1],[2] : 6
// element - [2],[0] : 3
// element - [2],[1] : 6
// element - [2],[2] : 9

// Sample output :
// The matrix is :
// 1 2 3
// 2 4 6
// 3 6 9

// Addition of the horizontal Diagonal elements is : 10

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
    int sum=0;
    printf("\nAddition of the horizontal Diagonal elements is:");
    for (c = 0; c < nc; c++) {
        for (r = 0; r < nr; r++) 
        {
           if( r+c==nr-1)
           {
               sum=sum+arr[r][c];
           }
        }
        // printf("\n");
    }
     printf("%d",sum);
    
    return 0;
}