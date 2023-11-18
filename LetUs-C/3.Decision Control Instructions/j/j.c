/*j.Given three points (x1,x2), (y1,y2) and (x3,y3) write a prograk to check
if all three points fall on a straight line.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x1, x2, x3, y1, y2, y3;
    int s1, s2, s3;

    printf("\nEnter the values of x1 and y1:\t");
    scanf("%d%d", &x1, &y1);
    printf("\nEnter the values of x2 and y2:\t");
    scanf("%d%d", &x2, &y2);
    printf("\nEnter the values of x3 and y3:\t");
    scanf("%d%d", &x3, &y3);

    //calculate slope of line between each pair of points
    s1 = abs(x2 - x1)/ abs(y2 - y1);
    s2 = abs(x3 - x2)/ abs(y3 - y2);
    s3 = abs(x3 - x1)/ abs(y3 - y1);

    if((s1 == s2) && (s1 == s3))
        printf("Points are co-linear\n");
    else
        printf("Points are not Co-linear\n");

    return 0;
}