/*1.Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, 
and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary. */

#include<stdio.h>
int main()
{
 float basic_salary,dea_allowance,hrent_allowance,gross_pay;
 
 printf("Enter basic salary of Ramesh :\t");
 scanf("%f", &basic_salary);
 
 dea_allowance = basic_salary * 0.4;
 hrent_allowance = basic_salary * 0.2;
 //gross pay = basic salary + allownaces
 gross_pay = basic_salary + dea_allowance + hrent_allowance;
 
 printf("\nBasic salary of Ramesh is : %.2f", basic_salary);
 printf("\nDearness allowance of Ramesh is : %.2f", dea_allowance);
 printf("\nHouse rent allowance of Ramesh is : %.2f", hrent_allowance);
 printf("\nGross pay of Ramesh is : %.2f", gross_pay);
 //%.nf format specifier where n = number of decimals to print
 return 0; 
}



