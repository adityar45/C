/*d.Any year is entered through the keyboard
Write a function to determine the year leap or not.*/

#include<stdio.h>

void leapyear(int);

int main()
{
    int year;

    printf("\nEnter a year :\t");
    scanf("%d", &year);

    leapyear(year);

    return(0);
}

void leapyear(int year)
{
    if( year%4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("\nIt is a leap year.");
    else
        printf("\nNot a leap year.");
}