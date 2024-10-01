#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profit_Percentage, loss_percentage;
    float profit=0;
    float loss =0;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter sellingPrice: ");
    scanf("%f", &sellingPrice);

    profit = sellingPrice - costPrice ;
    loss =    costPrice - sellingPrice;

    printf("profit=%.2f\nloss=%.2f\n", profit, loss);

    profit_Percentage = profit * 100 / costPrice;
    loss_percentage = loss * 100 /costPrice;

   printf("Profit Percentage= %.2f\nLoss Percentage= %.2f",profit_Percentage, loss_percentage);
}


            // or

            #include<stdio.h>
int main () {

  int  sellingprice ,costprice ,Profit, loss ,profitpercentage, losspercentage;

  printf("Enter a selling price (sp)");
  scanf("%d",&sellingprice);

  printf("Enter a cost price (cp)");
  scanf("%d",&costprice);

Profit = sellingprice - costprice;

loss = costprice - sellingprice;

profitpercentage = Profit * 100 / costprice;

losspercentage  = loss * 100 / costprice;

printf("selling price: %d\n",sellingprice);
printf("cost price: %d\n",costprice);
printf("profit: %d\n",Profit);
printf("loss : %d\n",loss);
printf("profit percentage:%d\n",profitpercentage);
printf("loss percentage :%d",losspercentage);

return 0;


}


