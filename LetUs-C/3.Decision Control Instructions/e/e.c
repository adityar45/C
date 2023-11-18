/*e.A five digit number is entered through keyboard. Write a program to obtain
the reversed of a number and determine whether they are equal or not.*/

#include<stdio.h>

int main()
{
    int num, a, n;
    long int reverse = 0;

    printf("Enter a 5 digit number :\t");
    scanf("%d", &num);

    n = num;
    //5th digit
    a = num % 10;
    num = num/10;
    reverse = reverse + a*10000;

    //4th digit
     a = num % 10;
    num = num/10;
    reverse = reverse + a*1000;

    //3rd digit
     a = num % 10;
    num = num/10;
    reverse = reverse + a*100;

    //2nd digit
     a = num % 10;
    num = num/10;
    reverse = reverse + a*10;

    //1st digit
     a = num % 10;
    num = num/10;
    reverse = reverse + a;

    if(reverse == n)
        printf("The givan number and reversed number are equal.\n");
    else
        printf("The given number are reversed are not equal.\n");

    return 0;
}