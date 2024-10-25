// #  #  #  #  #  
// #  #     #  #  
// #     #     #  
// #  #     #  #  
// #  #  #  #  #  

#include <stdio.h>

int main() {
    int nr;
    scanf("%d",&nr);
    
    for(int r=1;r<=nr;r++)
    {
        for(int c=1;c<=nr;c++)
        {
           if(r==1 ||r==nr|| c==1 || c==nr ||(r+c)%2==0)
           {
               printf("#  ");
           }
           else
           {
               printf("   ");
           }
          
        }
        printf("\n");
    }

    return 0;
}
