#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n], i,e,o,z;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are:\n");
    for (e=o=z=i = 0; i < n; i++) 
    {
        printf("Element at index %d: %d\n", i, arr[i]);
        // arr[i]==0?z++:arr[i]%2?o++:e++;
        
        if(arr[i]==0)
        {
            z++;
        }
        else if(arr[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("Even=%d,odd=%d,zero=%d",e,o,z);
    
    return 0;
}
