/*e.Write a program to find out all Armstrong numbers from 1 and 500
. If sum of cubes of each digit of the number is equal to the number itself,
then the number is called an Armstrong number.
153 = (1*1*1) + (5*5*5) + (3*3*3)*/

#include <stdio.h>

int main()
{
    int num = 1,count,a,b,c;
    printf("\nArmstrong numbers between 1 to 500 :\n");

    while(num<=500)
    {
        //123 and 50
        a = num % 10;  //last one digit  - 3 and 0
        b = num % 100; // last two digits - 23 and 50
        b = (b -a) / 10; //extract second digit - 2 and 5
        c = num / 100; //extract first digit - 1 and 0

        if((a*a*a) + (b*b*b) + (c*c*c) == num)
            printf("\n%d", num);
         
        num++;
    }
    return(0);

}