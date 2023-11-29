/*i. The BMI is defined as the ratio of weight in mg to the square
of the height in m. Write a program that receives weight
and height, calculate BMI and reports the BMI category 
as per the following table.

starvation < 15
anorexic - 15.1 to 17.5
underweight - 17.6 to 18.5
ideal - 18.6 to 24.9
overweight - 25 to 25.9
obese - 30 to 30.9
morbidly obese - >= 40
*/

#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter the weight in kg and height in m :\t");
    scanf("%f%f", &weight, &height);

    bmi = weight / (height * height);

    printf("Body Mass Index = %f\n", bmi);

    if(bmi < 15)
        printf("BMI category : Starvation\n");
    else if(bmi < 17.5)
        printf("BMI category : Anorexic\n");
    else if(bmi < 18.5)
        printf("BMI category : Underweight\n");
    else if(bmi < 25)
        printf("BMI category : Ideal\n");
    else if(bmi < 30)
        printf("BMI category : Overweight\n");
    else if(bmi < 40)
        printf("BMI category : Obese\n");
    else
        printf("BMI category : Morbidly Obese\n");

    
}