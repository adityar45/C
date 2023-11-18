/*If the ages of Ram, Shyam and Ajay are input through the keyboard
, write a program to determine the youngest of three.*/

#include<stdio.h>

int main()
{
    int ram, shyam, ajay, young;

    printf("Enter the age of Ram:\t");
    scanf("%d", &ram);
    printf("Enter the age of Shyam:\t");
    scanf("%d", &shyam);
    printf("Enter the age of Ajay:\t");
    scanf("%d", &ajay);

    if(ram < shyam)
    {
        if(ram < ajay)
            printf("Ram is youngest.");
        else
            printf("Ajay is youngest");
    }
    else
    {
        if(shyam < ajay)
            printf("Shyam is youngest");
        else
            printf("Ajay is youngest");
    }
}