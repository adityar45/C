//Sum of all digits in a number
/*If a five digit number is input through the keyboard, write a program to calculate the sum of digits.
(Hint : use the modulus operator %)*/

/*
#include<stdio.h>

int main()
{
 int a;
 float r;
 int sum=0;	
 printf("Enter a five digit number :\t");
 scanf("%d",&a);
 while(a>0)
 {
  r=a%10;
  sum=sum+r;
  a=a/10;
 } 
 printf("Sum of the digits is : %d", sum);
 return 0;	
}
*/

//Without using the while loop
#include<stdio.h>
int main()
{
 int a,n,b,num;
 int sum=0;
 
 printf("Enter a five digit number : ");
 scanf("%d",&num);
 b=num;
 
 //5th digit
 a=num%10;     //last digit as remainder
 num=num/10;   //remainimg digits
 sum+=a;       //adding the value of extracted remainder to the sum
 
 //4th digit
 a=num%10;
 num=num/10;
 sum+=a;
 
 //3rd digit
 a=num%10;
 num=num/10;
 sum+=a;
 
 //2nd digit
 a=num%10;
 num=num/10;
 sum+=a;
 
 //1st digit
 a=num%10;
 sum+=a;
 
 printf("The sum of the digits of number %d is : %d",b, sum); 	
}

