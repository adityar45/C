/*If lengths of three sides of a triangle are input through the keyboard, write a program to find the area 
of the triangle.*/

#include<stdio.h>
#include<math.h>

int main()
{
 float a,b,c,s,area;
 printf("Enter the lengths of three sides of the triangle (float values only) and ensure a + b > c otherwise it will show wrong result:\t");
 scanf("%f%f%f",&a,&b,&c);
 
 s=(a+b+c)/2;
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 
 printf("Area of Triangle Is : %f", area);
 	
}




























