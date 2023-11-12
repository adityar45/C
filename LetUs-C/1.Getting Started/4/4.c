/*4.Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program
to convert this temperature into centigrade degrees. */

#include<stdio.h>
int main()
{
 float fahrenheit,centigrade;
 
 printf("Enter the temperature in Fahrenheit :\t");
 scanf("%f",&fahrenheit);
 
 centigrade = 5.0 / 9.0 * (fahrenheit -32);
 printf("Temperature in centigrade = %f\n", centigrade);
 
 return 0; 	
}


























