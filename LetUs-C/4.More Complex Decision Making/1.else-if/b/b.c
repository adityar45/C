/*Any character is entered through the keyboard
Write a program to check whether it is captyital, small 
digit or special symbol.*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character from keyboard.\n");
    scanf("%c", &ch);

    if(ch >= 65 && ch<=90)
    {
        printf("The character is Capital Letter.");
    }

    
    if(ch >= 97 && ch<=122)
    {
        printf("The character is Small Letter.");
    }

    
    if(ch >= 48 && ch<=57)
    {
        printf("The character is a digit.");
    }

    
    if((ch >= 0 && ch<=47) || (ch >= 58 && ch<=64) || (ch >= 91 && ch<=96) || (ch >= 123 && ch<= 127))
    {
        printf("The character is a Special Symbol.");
    }

    return(0);

}