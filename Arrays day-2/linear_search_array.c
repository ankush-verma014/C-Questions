#include <stdio.h>

int main() {
     int n,a[100],i,ele,f=0;
     
     printf("Enter a array size 1 to 100:");
     scanf("%d",&n);
     
     printf("Enter %d integers:",n);
     
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
         
     }
     printf("Enter elment to search:");
     scanf("%d",&ele);
     for(i=0;i<n;i++)
     {
         if(a[i]==ele)
         printf("%d in %d cell\n",ele,i+1,f=1);
     }
        if(f==0)
        {
            printf("%d not found",ele);
        }
    return 0;
}