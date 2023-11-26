/*l.Given A Point (x,y) write a program to find out if it lies pn the x-axix, y-axis or on the origin*/

#include<stdio.h>

int main()
{
    int x, y;

    printf("\nEnter the x and y co-ordinate of a point :\t");
    scanf("%d%d", &x, &y);

    if(x == 0 && y == 0)
    {
        printf("\nPoint lies on the origin.");
    }
    else
    {
        if(x == 0 && y!= 0)
            printf("\nPoint lies on the Y-axis.");
        else if(x != 0 && y == 0)
            printf("\nPoint lies on the X-axis. ");
        else
            printf("\nPoint neither lies on any axis and origin.");
    }

    return(0);
}
