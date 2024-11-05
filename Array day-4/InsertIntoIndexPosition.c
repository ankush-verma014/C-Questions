#include <stdio.h>

int main() {
    int a[4],n, i, ele, pos;
    
    printf("Enter the size of an array 1-100: " );
    scanf("%d",&n);
    
    printf("Enter %d integer: ",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter the element and postion: ");
    scanf("%d %d",&ele,&pos);
    
    if(pos<1||pos>n+1){
        printf("position 1 to %d only",n+1);
        printf("Enter the element and postion: ");
        scanf("%d %d",&ele,&pos);
    }
    
    for(i=n; i>=pos; i--){
        a[i]=a[i-1];
    }
   
    a[i] = ele;
    
    printf("Elements: ");
    for(i=0; i<=n; i++){
        printf("%d ",a[i]);
    }

    return 0;
}