/*g. Write a program to enter numbers till the userr wants
At the end t should display count of positive, negative and zeroes entered.
*/

#include <stdio.h>

int main()
{
    int count,a=0,b=0,c=0,num,i=1;

    printf("\nHow many numbers you want to enter :\t");
    scanf("%d", &count);

    while(i<=count)
    {
        printf("\nEnter a number :\t");
        scanf("%d", &num);

        if(num>0)
            a++;
        else if(num<0)
            b++;
        else
            c++;
        i++;
    }
   
   printf("\nNo. of positive digits : %d", a);
   printf("\nNo. of negative digits : %d", b);
   printf("\nNo. of zeroes entered : %d", c);

    return(0);
}

