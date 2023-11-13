/*Write a program to receive Cartesian co-ordinates (x,y) of a point and convert
them into polar co-ordinates(r,$)
Hint: r = sqrt(x^2+y^2) and theta = tan^-1(y/x) */

#include<stdio.h>
#include<math.h>
int main()
{
 float x,y,r,theta;
 printf("Enter x and y co-ordinates:(float values only)");
 scanf("%f%f",&x,&y);
 
 r=sqrt(x*x+y*y);
 theta=atan2(y,x);
 theta=theta*180/3.14;
 printf("The Polar co-ordinates are : r=%f and theta=%f\n",r,theta);
 
 return 0;
}





