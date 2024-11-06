
// Write a C program that creates a 2D array of size 3x3. The program should prompt the user to input the elements of the matrix, 
// with each input being labeled by its row and column index (e.g., element - [0],[0]). 
// After all the elements are entered, the program should print the matrix in a 3x3 format, with each row of the matrix displayed on a new line.

// Sample input :
// Input elements in the matrix:
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [0],[2] : 3
// element - [1],[0] : 4
// element - [1],[1] : 5
// element - [1],[2] : 6
// element - [2],[0] : 7
// element - [2],[1] : 8
// element - [2],[2] : 9

// Sample output :
// The matrix is:
// 1 2 3
// 4 5 6
// 7 8 9

// Solve:

// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int nr, nc;
   printf("Enter the number of rows and columns: ");
   scanf("%d %d", &nr, &nc);
   
   int arr[nr][nc], r, c;
   
   printf("Input elements in the matrix:\n");
   for(r = 0; r < nr; r++) 
   {
       for(c = 0; c < nc; c++) 
       {
           printf("element-[%d] [%d]:",r,c);
           scanf("%d", &arr[r][c]);
       }
   }
   
   printf("The matrix is:\n");
   for(r = 0; r < nr; r++) {
       for(c = 0; c < nc; c++) {
           printf("%4d", arr[r][c]);
       }
       printf("\n");
   }

    return 0;
}
