#include<stdio.h>
int main () {

  int costprice, repaircost, coloringcost,accessoriescost,desiredprofit , totalcost;


  printf("The initial cost of the cycle =");
  scanf("%d",&costprice);
  printf(" The cost of repairs =");
  scanf("%d",&repaircost);
  printf(" The cost of coloring =");
  scanf("%d",&coloringcost);
  printf(" The cost of new accessories  =");
  scanf("%d",&accessoriescost);
   printf(" The desired profit =");
  scanf("%d",&desiredprofit);

  int sellingprice = costprice+repaircost+ coloringcost+accessoriescost+desiredprofit;

  totalcost= sellingprice-desiredprofit;

  printf("cost price:Rs.%d\n",costprice);
  printf("repair cost:Rs. %d\n",repaircost);
  printf("coloring cost:Rs. %d\n",coloringcost);
  printf("new accessories cost :Rs.%d\n",accessoriescost);
  printf("desired profit:Rs.%d\n",desiredprofit);
  printf("selling price:Rs.%d\n",sellingprice);
  printf("total cost:Rs. %d\n",totalcost);

}