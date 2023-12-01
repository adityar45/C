/*d.Write a program to print all the ASCII values and their
equivalent character using while loop*/

#include<stdio.h>

int main()
{
    int i=0;

    while(i<=255)
    {
        printf("\nThe character is '%c' and ASCII value is : %d", i, i);

        i++;
    }
    
    return(0);
}