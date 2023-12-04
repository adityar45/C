/*c.two number are entered through the keyboard. write a program to find value of one number raised to the other
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int count=1,num,power,result=1;

    printf("\nEnter a number :\t");
    scanf("%d", &num);

    printf("\nEnter power to the number :\t");
    scanf("%d", &power);

   while(count<=power)
   {
        result = result * num;
        count++;
   }

    printf("\nThe answer is :\t%d", result);
    
    return(0);
}