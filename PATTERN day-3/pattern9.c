// 1
// 1   2
// 3   4   5 
// 6   7   8   9
// 10  11  12  13  14

#include<stdio.h>
int main(){
    int nr,r,c,n=1;
    scanf("%d", &nr);

    for(int r = 1; r <= nr; r++){
        for(int c = 1; c <= r; c++){
            if(r == 1){
                printf("%2d", 1);
            }
            else {
                printf("%2d ", n++);
            }
        }
        printf("\n");
    }
    return 0;
}