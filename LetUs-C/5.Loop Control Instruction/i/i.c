/*i.Write a program to find the range of a set of numbers entered through keyboard.
Range is the difference between smallest and biggest number in the list*/

#include <stdio.h>

int main()
{
    int count,num,big,small,range;

    printf("\n\nHow many number you want to enter ti find the range :\t");
    scanf("%d", &count);

    int flag = 0;

    while(count > 0)
    {
       printf("\nEnter number :\t");
       scanf("%d", &num); 

       if(flag == 0)
       {
        big = small = num;
        flag = 1;
       }
       else
       {
        if(num > big)
            big = num;
        if(num < small)
            small = num;
       }
       count--;
    }

    range = big - small;

    printf("\nRange between the number %d and %d is : %d", small, big, range);

    
}