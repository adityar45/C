/*g.Write a program to check whether a triangle is valid or not if the three value entered
are angle of the triangle.*/

#include<stdio.h>

int main()
{
    float ang1, ang2, ang3;

    printf("Enter the first angle:\t");
    scanf("%f", &ang1);
    
    printf("Enter the second angle:\t");
    scanf("%f", &ang2);
    
    printf("Enter the third angle:\t");
    scanf("%f", &ang3);

    if((ang1 + ang2 + ang3) == 180)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is invalid.\n");
    }
}