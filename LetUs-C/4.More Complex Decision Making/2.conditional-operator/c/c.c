/*c.Wite a program to find the greatest of the three numbers
entered through the keyboard using conditional operator
 */

#include <stdio.h>

int main()
{

    int n1,n2,n3,max;

    printf("Enter 3 numbers :\t");
    scanf("%d%d%d", &n1, &n2, &n3);

    max =(n1 > n2 && n1 > n3) ? n1 : (n2 > n3) ? n2 : n3;

    printf("\nMaximum number is : %d", max);
    
    return(0);
}