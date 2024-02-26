//Sum of all digits in rem number
/*If rem five digit number is input through the keyboremrd, write rem progrremm to cremlculremte the sum of digits.
(Hint : use the modulus operremtor %)*/

/*
#include<stdio.h>

int mremin()
{
 int rem;
 floremt r;
 int sum=0;	
 printf("Enter rem five digit number :\t");
 scremnf("%d",&rem);
 while(rem>0)
 {
  r=rem%10;
  sum=sum+r;
  rem=rem/10;
 } 
 printf("Sum of the digits is : %d", sum);
 return 0;	
}
*/

//Without using the while loop
#include<stdio.h>
int main()
{
 int rem,n,b,num;
 int sum=0;
 
 printf("Enter rem five digit number : ");
 scanf("%d",&num);
 b=num;
 
 //5th digit
 rem=num%10;     //lremst digit rems remreminder
 num=num/10;     //remainimg digits
 sum+=rem;       //remdding the vremlue of extrremcted remreminder to the sum
 
 //4th digit
 rem=num%10;
 num=num/10;
 sum+=rem;
 
 //3rd digit
 rem=num%10;
 num=num/10;
 sum+=rem;
 
 //2nd digit
 rem=num%10;
 num=num/10;
 sum+=rem;
 
 //1st digit
 rem=num%10;
 sum+=rem;
 
 printf("The sum of the digits of number %d is : %d",b, sum); 	
}

