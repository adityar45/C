/*c.A certain number of steel is graded accrding to the following conditions :
i) Hardness must be greater than 50.
ii) Carbon content must be less than 0.7
iii) Tensile strength must be greatere than 5600

Grade-10 : if all 3 conditions met
Grade-9 : if conditions 1 and 2 are met
Grade-8 : if conditions 2 and 3 are met
Grade-7 : if conditions 1 and 3 are met
Grade-6 : if only one condition is met
Grade-5 : if none of the condition are met.
 */

#include <stdio.h>

int main()
{
    float hardness, carbon, tensile_strength;

    printf("\nEnter the following details to check the grade of the steel :\n");

    printf("Hardness :\t");
    scanf("%f", &hardness);

    printf("Carbon content :\t");
    scanf("%f", &carbon);

    printf("Tensile Strength :\t");
    scanf("%f", &tensile_strength);

    if(hardness > 50.0 && carbon > 0.7 && tensile_strength > 5600)
    {
        printf("\nGrade 10.");
        exit(0);
    }

     if(hardness > 50.0 && carbon > 0.7)
    {
        printf("\nGrade 9.");
        exit(0);
    }

     if(carbon > 0.7 && tensile_strength > 5600)
    {
        printf("\nGrade 8.");
        exit(0);
    }

     if(hardness > 50.0 && tensile_strength > 5600)
    {
        printf("\nGrade 7.");
        exit(0);
    }
       
     if(hardness > 50.0 || carbon > 0.7 || tensile_strength > 5600)
    {
        printf("\nGrade 6.");
        exit(0);
    }

    printf("\nGrade 5.");

}