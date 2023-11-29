/*h.Write a program that receives month and date of birth 
as input and prints the corresponding zodiac sign based on
the table.*/

#include<stdio.h>

int main()
{
    int day, month;

    printf("Enter day and month of birth :\t");
    scanf("%d%d", &day, &month);

    if((day >= 22 && month == 12) || (day <= 19 && month == 1))
        printf("Capricon.\n");

    if((day >= 20 && month == 1) || (day <= 17 && month == 2))
        printf("Aquarious.\n");

    if((day >= 18 && month == 2) || (day <= 19 && month == 3))
        printf("Pisces.\n");

    if((day >= 20 && month == 3) || (day <= 19 && month == 4))
        printf("Aries.\n");

    if((day >= 20 && month == 4) || (day <= 20 && month == 5))
        printf("Taurus.\n");

    if((day >= 21 && month == 5) || (day <= 20 && month == 6))
        printf("Gemini.\n");

    if((day >= 21 && month == 6) || (day <= 22 && month == 7))
        printf("Cancer.\n");

    if((day >= 23 && month == 7) || (day <= 22 && month == 8))
        printf("Leo.\n");

    if((day >= 23 && month == 8) || (day <= 22 && month == 9))
        printf("Virga.\n");

    if((day >= 23 && month == 9) || (day <= 22 && month == 10))
        printf("Libra.\n");

    if((day >= 23 && month == 10) || (day <= 21 && month == 11))
        printf("Scorpio.\n");

    if((day >= 22 && month == 11) || (day <= 21 && month == 12))
        printf("Sagittarius.\n");

     return(0);   

}