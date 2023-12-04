/*b.Write a function power (a, b) to calculate the value of a raised to b.*/

#include <stdio.h>

//function prototype
int power(int, int);

int main()
{
   int num, pow_num, result;

   printf("\nEnter a number (base number):\t");
   scanf("%d", &num);
   printf("\nEnter power to the number :\t");
   scanf("%d", &pow_num);

   result = power(num, pow_num);

   printf("The Answer is : %d", result);

   return(0);
}

int power(int x, int y)
{
   int i=1, result_power=1;

   while(i <= y)
   {
      result_power = result_power * x;
      i++;
   }

   return(result_power);
}
