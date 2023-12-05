/*a.Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs.12 per hr
for every hr worked above 40 hrs. Assume that employees do not work for fractional part of an hour*/

#include <stdio.h>

int main()
{
    int x,num,i=1;
    unsigned long int factorial = 1;
    
    while(1)
    {
    printf("\n1) factorial of a number");
    printf("\n2) Prime or not.");
    printf("\n3) odd or even");
    printf("\n4) exit");
    printf("\nEnter a number for the action to perform :\t");
    scanf("%d", &x);

    switch(x)
    {
        case 1:

        printf("\nEnter a number to find factorial :\t");
        scanf("%d", &num);

        while(i<=num)
        {
            factorial = factorial * i;
            i++;
        }

        printf("\nFactorial of a number %d is : %lu\n", num, factorial);
        break;

        case 2:

        printf("\nEnter a number :\t");
        scanf("%d", &num);

        for(i = 2; i < num; i++)
        {
            if(num % 2 == 0)
            {
                printf("\nNot a prime number\n");
                break;
            }
        }
        if(i == num)
        {
            printf("\nPrime number.\n");
        }    

        break;

        case 3:
        printf("\nEnter any number :\t");
        scanf("%d", &num);

        if(num % 2 == 0)
            printf("\nThe number is even.\n");
        else
            printf("\nThe number is odd.\n");
        break;

        case 4:
            exit(0);
    }
    }
    
    return 0;
}