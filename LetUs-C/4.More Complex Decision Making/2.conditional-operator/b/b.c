/*b.Write a program using conditional operator to check if its 
leap year or not*/

#include <stdio.h>

int main()
{
    int year;

    printf("\nEnter a year :\t");
    scanf("%d", &year);

    ((year % 100 == 0) && (year % 400 == 0)) || (year & 4 == 0) ? printf("\nit is a leap year") : printf("\nIt is not a leap year");
    
    return(0);

}