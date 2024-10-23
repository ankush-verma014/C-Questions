
//  5  4  3  2  1
//     4  3  2  1
//        3  2  1
//           2  1
//              1

#include <stdio.h>

int main() {
    int nr,r,c,n;
    
    scanf("%d",&nr);
    for(r=nr;r>=1;r--)
    {
        for(c=1;c<=nr-r;c++)
        {
            printf("  ");
        }
        for(c=r;c>=1;c--)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
      
    return 0;
}