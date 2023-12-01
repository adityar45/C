/*b.Write a program to find factorial of a number.*/

#include <stdio.h>

int main()
{
   int num,i=1;
   unsigned long int factorial = 1;

   printf("\nEnter a number to find factorial :\t");
   scanf("%d", &num);

   while(i<=num)
   {
        factorial = factorial * i;
        i++;
   }

   printf("\nFactorial of a number %d is : %lu", num, factorial);
   return(0);

}