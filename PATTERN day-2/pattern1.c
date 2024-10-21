// Write C program to print given pattern.

// 1   2   3   4   5
// 10  9   8   7   6
// 11  12  13  14  15
// 20  19  18  17  16
// 21  22  23  24  25

// #include <stdio.h>

// int main() {
//     int nr,nc,r,c,n=1;
    
//     printf("Enter a number of rows and coloumn:");
//     scanf("%d %d",&nr,&nc);
    
//     for(r=1;r<=nr;r++)
//     {
//         for(c=1;c<=nc;c++)
//         {
//             if(r%2==0)
//             {
//                 printf("%3d",--n);
//             }
//             else
//             {
//                 printf("%3d",n++);
//             }
            
//         }
//             n=n+nr;
//         printf("\n");
//     }
//        return 0;
//     }

#include<stdio.h>
int main(){
    int num, digit = 1;

    scanf("%d", &num);

    for(int row = 1; row <= num; row++){
        
        if(row % 2 != 0){
            for(int col = 1; col <= num; col++){
                printf("%3d ", digit++);
            }
        }
        else {
            int temp = digit + num - 1;  
            for(int col = 1; col <= num; col++){
                printf("%3d ", temp--);    
            }
            digit += num;  
        }
        printf("\n");
    }

    return 0;
}