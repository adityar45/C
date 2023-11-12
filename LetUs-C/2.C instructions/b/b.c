/*If a five digit number is input through the keyboard, write a program to reverse the number*/

/*
#include<stdio.h>
int main()
{
 int num,a,i=0;
 int b[5];
 
 printf("Enter the five digit number you want to reverse : \n");
 scanf("%d", &num);
 
 //5th digit
 a=num%10;
 b[i]=a;
 i++;
 num=num/10;
 
 //4th digit
 a=num%10;
 b[i]=a;
 i++;
 num=num/10;
 
 //3rd digit
 a=num%10;
 b[i]=a;
 i++;
 num=num/10;
 
 //2nd digit
 a=num%10;
 b[i]=a;
 i++;
 num=num/10;
 
 //1st digit
 a=num%10;
 b[i]=a;
 i++;
 num=num/10;
 
 for(int i=0;i<5;i++)
 {
  printf("%d",b[i]);
 }	
}

*/
#include<stdio.h>
int main()
{
 int a,b,n;
 long int num=0;
 
 printf("Enter a five digit number :\t");
 scanf("%d",&n);
 
 //5th digit
 a=n%10;
 n=n/10;
 num=num+a*10000;
 
 //4th digit
 a=n%10;
 n=n/10;
 num=num+a*1000;
 
 //3rd digit
 a=n%10;
 n=n/10;
 num=num+a*100;
 
 //2nd digit
 a=n%10;
 n=n/10;
 num=num+a*10;
 
 //1st digit
 a=n%10;
 n=n/10;
 num=num+a;
 
 printf("The reversed number is :%d",num);	
}

