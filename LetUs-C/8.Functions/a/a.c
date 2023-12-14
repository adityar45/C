/*a.WAP Write a function to calculate factorial value of an integer
entered through the keyboard.*/

#include <stdio.h>

//function prototype
int factorial(int);

int main()
{
    int num, result;
    printf("\nEnter a number :\t");
    scanf("%d", &num);

    result = factorial(num);
    
    printf("\nFactorial of a number is : %d", result);
    return 0;
}

int factorial(int x)
{
    int i = 1, result_fact =1;

    while(i<=x)
    {
        result_fact = result_fact * i;
        i++; 
    }

    return(result_fact);
}