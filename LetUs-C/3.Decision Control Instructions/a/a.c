/*a.if cost and selling price are input through the keyboard, write a program whether the seller made profit 
or loss. Also determine how much profit or loss he incurred.*/

#include<stdio.h>

int main()
{
    float cost_price, sell_price, profit, loss;

    printf("\nEnter cost price for the item :\t");
    scanf("%f", &cost_price);
    printf("\nEnter selling price for this item :\t");
    scanf("%f", &sell_price);

    profit = sell_price - cost_price;
    loss = cost_price - sell_price;

    if(profit > 0)
    {
        printf("\nThe profit is :%f", profit);
    }
    
    if(loss > 0)
    {
        printf("\nThe loss is :%f", loss);
    }

    if(profit == loss)
    {
        printf("\nNo profit, No Loss !");
    }
}