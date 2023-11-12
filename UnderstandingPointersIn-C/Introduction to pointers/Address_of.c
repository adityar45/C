#include<stdio.h>

int main()
{
 int i=3;
 printf("Address of i = %u\n" , &i);    // Address of variable by & operator 
 
 printf("Value of i = %d\n" , i);
 
 printf("Value of i = %d\n" , *(&i));   // Value by * operator
 
 return 0;	
}
