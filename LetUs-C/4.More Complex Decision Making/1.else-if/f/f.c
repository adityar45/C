/*f. In boxing the weight class of a boxer is decided as per the following table
Write a program that receives weight as input and prints 
out the boxer's weight class.

Flyweight - <115
Bantamweight - 115 - 121
featherweight - 122 - 153
Middleweight - 154 - 189
Heavyweight - >= 190
*/

#include <stdio.h>

int main()
{
    int weight;

    printf("\nEnter the weight :\t");
    scanf("%d", &weight);

    if(weight < 115)
        printf("Flyweight Category.\n");

    if(weight >= 115 && weight <= 121)
        printf("bantamweight Category.\n");

    if(weight >= 122 && weight <= 153)
        printf("featherweight Category.\n");

    if(weight >= 154 && weight <= 189)
        printf("middleweight Category.\n");

    if(weight >= 190)
        printf("heavyweight Category.\n");

    return(0);
    
}