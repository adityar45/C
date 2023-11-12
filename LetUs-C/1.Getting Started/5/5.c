/*5.The length and breadth of a rectangle and radius of circle are input through keyboard .
Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.*/

#include<stdio.h>
int main()
{
 int length,breadth,radius;
 float areaOfCircle,perimeter,areaOfRectangle,circumference;
 
 printf("Enter length of a rectangle :\t");
 scanf("%d",&length);
 printf("Enter breadth of a rectangle :\t");
 scanf("%d",&breadth);
 printf("Enter radius of circle :\t");
 scanf("%d",&radius);
 
 areaOfRectangle=length*breadth;
 perimeter=2*(length+breadth);
 areaOfCircle=3.14*radius*radius;
 circumference=2*3.14*radius;
 
 printf("\n\nArea of Rectangle is : %.2f",areaOfRectangle);
 printf("\n\nPerimeter of Rectangle : %.2f",perimeter);
 printf("\n\nArea of Circle is : %.2f",areaOfCircle);
 printf("\n\nCircumference of circle : %.2f",circumference);
 
}
