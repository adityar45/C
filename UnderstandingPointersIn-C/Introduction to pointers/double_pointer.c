#include<stdio.h>

int main()
{
 int i=3;
 int *j;
 int **k;
 j=&i;
 k=&j;
 
 //4 ways to print value of i
 printf("Value of i = %d\n" , i);
 printf("Value of i = %d\n" , *j); 
 printf("Value of i = %d\n", *(&i));  
 printf("Value of i = %d\n\n", **k);
 
 // 1 way to print value of j
 printf("Value of j= %d\n\n" , j);
 
 //1 way to print value of k
 printf("Value of k= %d\n\n" , k);
 
 //3 ways to print address of i
 printf("Address of i = %u\n", &i); 	
 printf("Address of i = %u\n", j);
 printf("Address of i = %u\n\n", *k);
 
 //2 ways to print address of j
 printf("Address of j =%u\n", &j);
 printf("Address of j=%u\n\n", k);
 
 //1 way to print address of k
 printf("Address of k=%u\n\n", &k);
}
