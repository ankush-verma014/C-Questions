/*
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5 
1 2 3 4
1 2 3
1 2 
1
*/

#include <stdio.h>

int main(){
    int nr, a=1;
    
    scanf("%d",&nr);

    for(int r=1;r<=nr;r++)
    {
        for(int c=1;c<=r;c++)
        {
            printf("%d ",a);
            a++;
        }
        a=1;
        printf("\n");
    }
    for(int r=1;r<=nr;r++)
    {
        for(int c=1;c<=nr-r;c++)
        {
            printf("%d ",a);
            a++;
        }
        a=1;
        printf("\n");
    }
    return 0;
}

