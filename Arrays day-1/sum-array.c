//  Perform the arithmetic operation on the array 
//     element.
//     Test case as:
//     |- with the less line of code
//     |- common element to use while calculating the equation 
    
//     Input as :[ 1,2,3,4 ]
//     Output as:  
//     sum= 10;
//     sub= -8
//     multi= 24

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int sum = 0, sub, multi = 1;

    for (int i = 0; i < 4; i++) {
        sum += arr[i];
        multi *= arr[i];
    }
    sub = arr[0] - (sum - arr[0]);

    printf("sum= %d\n", sum);
    printf("sub= %d\n", sub);
    printf("multi= %d\n", multi);

    return 0;
}
