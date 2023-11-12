/*Two numbers are input through the keyboard into two locations C and D.Write a program
to interchange the contents of C and D
Swapping the numbers*/

#include<stdio.h>
int main()
{
 int c,d,temp;
 
 printf("Enter the number at location C :\t");
 scanf("%d",&c);
 printf("Enter the number at location D :\t");
 scanf("%d",&d);
 
 temp=c;
 c=d;
 d=temp;
 
 //interchange the values
 printf("\nAfter changing the location\n\n");
 printf("The number at location C is :%d\n",c);
 printf("The number at location D is :%d\n",d);	
 
 return 0;
}
