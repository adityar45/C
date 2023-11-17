/*a.if cost and selling price are input through the keyboard, write a program whether the seller made profit 
or loss. Also determine how much profit or loss he incurred.*/

#include<stdio.h>

int main()
{
    int cost_price, sell_price, calc;

    printf("\nEnter cost price for the item :\t");
    scanf("%d", &cost_price);
    printf("\nEnter selling price for this item :\t");
    scanf("%d", &sell_price);

    calc = sell_price - cost_price;

    if(calc>0)
    {
        printf("\nThe profit is :%d", calc);
    }
    else
    {
        calc *= (-1);
        printf("\nThe loss is :%d", calc);
    }
}