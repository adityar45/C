/*i.Given the length and breadth of a rectangle, write a program to find
to find whether the area of the rectangle is greater than its perimeter*/

#include<stdio.h>

int main()
{
    int length, breadth, area, perimeter;

    printf("Enter length and breadth of a rectangle:\t");
    scanf("%d%d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if(area > perimeter)
        printf("Area is greater than perimeter.");
    else
        printf("Area is lesser than the perimeter.");
        
}