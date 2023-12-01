/*d.Write a program to receive value of an angle in degrees and check whether the sum of squares
of sine and cosine of this angle is equal to 1*/
//sin
#include<stdio.h>
#include<math.h>

int main()
{
    float angle_degree, angle_radian;

    printf("\nEnter value of an angle (in degrees) :\t");
    scanf("%f", &angle_degree);

    angle_radian = angle_degree * 3.14 / 180;

    ((sin(angle_radian)*sin(angle_radian)) + (cos(angle_radian)*cos(angle_radian))) == 1 ? printf("\nSquares and sum of sin and cos is : 1")
    :  printf("\nSquares and sum of sin and cos is not 1");

    return(0);
}