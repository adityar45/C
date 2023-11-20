/*k.Given the co-ordinates (x,y) of cente of a circle and its radius, write
a program that will determine whether a point lies inside, outside or
on the circle.
use sqrt() and pow()*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x, y
    float radius, diameter, distance;

    printf("\nEnter radius of a circle:\t");
    scanf("%f", &radius);

    printf("\nEnter co-ordinates of point (x,y) :\t");
    scanf("%d%d", &x, &y);

    distance = sqrt((pow(x,2) + pow(y,2)));

    printf("\nDistance of the point from origin is :\t%f", distance);

    if(distance == radius)
        printf("\nPoint is on the circle.");
    else
    {
        if(distance > radius)
            printf("\nPoint is outside the circle.");
        else
            printf("\nPoint is inside the circle.");
    }




}