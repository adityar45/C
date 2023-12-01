/*a.Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs.12 per hr
for every hr worked above 40 hrs. Assume that employees do not work for fractional part of an hour*/

#include <stdio.h>

int main()
{
    int count=1, hours, pay;
    int i=1;

    while(count<=10 && i<=10)
    {

        printf("\nEmployee No. %d :\n",i);
        printf("\nEnter total no. of hrs worked by an employee to calculate overtime if worked above 40 hrs :\t");
        scanf("%d", &hours);

        if(hours>40)
        {
            pay = hours - 40;
            pay = pay * 12;
            printf("\nOvertime Pay (in Rs) i : %d", pay);
        }
        else
        {
            printf("\nNo overtime hours");
        }

        count++;
        i++;
        
    }
    return 0;
}