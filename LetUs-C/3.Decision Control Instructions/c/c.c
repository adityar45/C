/*cwrite a program to determine whether the year is leap or not.*/

#include<stdio.h>

int main()
{
    int year;

    printf("\nEnter a year:\t");
    scanf("%d", &year);

    if(year % 100 == 0)
    {
        if(year % 400 == 0)
            printf("It is a leap year.\n");
        else
            printf("It is not a leap year\n");
    }
    else
    {
        if(year % 4 == 0)
            printf("It is a leap year\n");
        else
            printf("It is not a leap year\n");
    }
}