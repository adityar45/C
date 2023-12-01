/*e.If 3 sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle.*/

#include <stdio.h>

int main()
{
    int s1, s2, s3, a, b, c;

    printf("\nEnter 3 sides of a triangle :\t");
    scanf("%d%d%d", &s1, &s2, &s3);

    if(s1 != s2 && s2 != s3 && s1 != s3)
        printf("\nScalene Triangle.");

    if((s1 == s2) && (s2 != s3))
        printf("\nIsosceles Triangle.");

    if((s2 == s3) && (s3 != s1))
        printf("\nIsosceles Triangle.");

    if((s1 == s3) && (s3 != s2))
        printf("\nIsosceles Triangle.");

    if((s1 == s2) && (s2 == s3))
        printf("\nEquilateral Triangle.");

    a = (s1 * s1) == (s2 * s2) + (s3 * s3); 
    
    b = (s2 * s2) == (s1 * s1) + (s3 * s3);   
    
    c = (s3 * s3) == (s1 * s1) + (s2 * s2);  

    if(a || b || c)
        printf("\nRight Angeled Triangle.");

    return(0);

}