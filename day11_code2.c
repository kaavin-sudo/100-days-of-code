// calculating profit and loss

#include <stdio.h>
 
int main()
{
   float cp, sp, profit, loss;// variable declaration
 
   printf("Enter cost price: ");// taking input of cost price from the user
   scanf("%f", &cp);
 
   printf("Enter selling price: ");// taking input of selling price from the user
   scanf("%f", &sp);
 
   if (sp > cp)// condition of if the selling price is greater than the cost price
   {
       profit = sp - cp;// operation for calculating profit
       printf("Profit = %.2f\n", profit);// printing the profit
       printf("Profit percentage = %.2f%%\n", (profit / cp) * 100);/*printing the profit percentage and also
        performing the operation of calculating the profit percentage*/
   }
   else if (cp > sp)// condition of if the cost price if greater than the selling price 
   {
       loss = cp - sp;// operation for calculating the loss
       printf("Loss = %.2f\n", loss);// printing the loss
       printf("Loss percentage = %.2f%%\n", (loss / cp) * 100);/*printing the profit percentage and also
        performing the operation of calculating the profit percentage*/
   }
   else
   {
       printf("No profit, no loss");// printing statement if none of the conditions are satisfied
   }
 
   return 0;
}