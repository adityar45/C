 #include<stdio.h>
 
 int main()
{
 int i=3;  // variable declaration
 int *j;   // Pointer declaration
 j = &i;   // Pointer definition
 
 // 3 ways to display value of i
 printf("Value of i = %d\n", i);
 printf("Value of i = %d\n", *j);
 printf("Value of i = %d\n", *(&i));
 
 //1 way to display value of j
 printf("Value of j = %d\n", j);
 
 //2 way to display address of i
 printf("Address of i =%u\n", &i);
 printf("Address of i =%u\n", j);
 
 //1 way to display address of j
 printf("Address of j =%u\n", &j);
 
 return 0; 
  	
}
