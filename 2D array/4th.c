// Write a program in C to find the sum of the principal diagonal of a matrix.

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

// Addition of the principal Diagonal elements is : 14
#include <stdio.h>

int main() {
    int rows, cols,s=0;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Orignal Matrix: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           if(i==j){
            s= s+matrix[i][j];
           }
        }
      
    }
     printf("Addition of the principal Diagonal elements is : %d",s);

  

    return 0;
}