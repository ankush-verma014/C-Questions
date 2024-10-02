
// Imagine you are running a small shop selling various items like groceries, stationery, and household products. 
// One day, you decided to sell 100 units of a particular item that you bought in bulk. 

// Here is the information you have:
// Cost Price (CP) per unit: ₹50
// Selling Price (SP) per unit: ₹60
// Using the C program provided, calculate the total profit or loss you made from selling all 100 units of the item. 
// Additionally, what would be the outcome if you had to reduce the selling price to ₹45 per unit due to a sudden market drop?

#include<stdio.h>

int main(){
 int cp, sp, profit, loss;
 
 printf("Enter Cost Price(CP): \n");
 scanf("%d %d", &cp, &sp);

 profit = sp - cp;
 loss = cp - sp;

 if(cp<sp)
 {
    printf("profit per unit= %d\n", profit);
    printf("total profit on 100 units = %d\n", 100*profit);
 }
 else
 {
    printf("Loss per unit = %d\n", loss);
    printf("Total Loss on 100 units = %d\n", 100*loss);
 }


    return 0;
}