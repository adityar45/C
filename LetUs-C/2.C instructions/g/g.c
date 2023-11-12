/*If value of an angle is input through the keyboard, write a program to print all its
Trigonometric ratios.*/

#include<stdio.h>
#include<math.h>
int main()
{
 float angle,s,c,t;
 
 printf("Enter value of angle (in degree):\t");
 scanf("%f",&angle);
 
 //convert angle from degree to radian
 angle=angle*3.14/180;
 
 s=sin(angle);
 c=cos(angle);
 t=tan(angle);
 
 printf("\nsin=%f\ncos=%f\ntan=%f\n",s,c,t);
 
 return 0;	
}
