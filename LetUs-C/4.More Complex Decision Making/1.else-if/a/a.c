/*Any year is entered through the keyboard write a program to determine whether the year is leap or not using
logical operator && and ||*/

#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year to check if its leap year or not :\t");
    scanf("%d", &year);

    if(year%100 != 0 || year%400 == 0 && year % 4 == 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }

    return 0;
}