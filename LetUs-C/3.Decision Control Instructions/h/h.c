/*h.Find the absolute value of a number entered through keyboard*/

#include<stdio.h>

int main()
{
    float num;

    printf("Enter any number :\t");
    scanf("%f", &num);

    if(num < 0)
        num = num * (-1);

    printf("The absolute value of a given number is :%f\n", num);

    return 0;
}