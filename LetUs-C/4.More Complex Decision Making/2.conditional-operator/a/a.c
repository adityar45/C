/*a.Using conditional operator determine:
1)whether the character entered through the keyboard is a lower case alphabate or not
2)whether a character entered through the keyboard is a special symbol or not */

#include <stdio.h>

int main()
{
    char ch;
    int asc_value;

    printf("\nEnter any character or special symbol from the keyboard :\t");
    scanf("%c",&ch);

    asc_value = ch;

    asc_value >= 97 && asc_value <=122 ? printf("\nCharacter entered is in lower case.") : printf("\nCharacter entered is not in lower case.");

    (asc_value >= 0 && asc_value <= 47) || (asc_value >= 58 && asc_value <= 64) || (asc_value >= 91 && asc_value <= 96) || (asc_value >= 123 && asc_value <= 127) ? printf("\nCharacter entered is a special symbol.") : printf("\nCharacter entered is not a special symbol");
    
    return 0;
    
}