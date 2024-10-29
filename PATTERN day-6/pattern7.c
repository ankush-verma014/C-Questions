// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 

// only 7 raw. print


#include<stdio.h>
int main () {
    
    int nr,r,c;
    
    scanf("%d",&nr);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nr;c++)
        {
            if(r==1||c==1||r==nr||c==nr)
            {
                printf("4 ");
    
            }
           
            else if(r==2||c==2||r==nr-1||c==nr-1)
            {
                printf("3 ");
            }
            else if(r==3||c==3||r==nr-2||c==nr-2)
            {
                printf("2 ");
            }
            else
            {
                printf("1 ");
            }
            
        }
        printf("\n");
    }
}