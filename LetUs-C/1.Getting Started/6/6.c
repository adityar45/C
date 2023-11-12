/*6.Paper of size A0 dimensions 1189mm*841mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841mm*594mm. Write a program to calculate and print paper
sizes sizes A0,A1,A2,...A8.*/
 
 #include<stdio.h>
 int main()
 {
  int a0h1,a0w1;
  int a1h1,a1w1,a2h1,a2w1;
  int a3h1,a3w1,a4h1,a4w1;
  int a5h1,a5w1,a6h1,a6w1;
  int a7h1,a7w1,a8h1,a8w1;
  
  a0h1=1189;
  a0w1=841;
  printf("\nSize of A0 - Height = %d and Width = %d", a0h1, a0w1);
  
  a1h1=a0w1;
  a1w1=a0h1/2;
  printf("\nSize of A1 - Height = %d and Width = %d", a1h1, a1w1);
  
  a2h1=a1w1;
  a2w1=a1h1/2;
  printf("\nSize of A2 - Height = %d and Width = %d", a2h1, a2w1);
  
  a3h1=a2w1;
  a3w1=a2h1/2;
  printf("\nSize of A3 - Height = %d and Width = %d", a3h1, a3w1);
  
  a4h1=a3w1;
  a4w1=a3h1/2;
  printf("\nSize of A4 - Height = %d and Width = %d", a4h1, a4w1);
  
  a5h1=a4w1;
  a5w1=a4h1/2;
  printf("\nSize of A5 - Height = %d and Width = %d", a5h1, a5w1);
  
  a6h1=a5w1;
  a6w1=a5h1/2;
  printf("\nSize of A6 - Height = %d and Width = %d", a6h1, a6w1);
  
  a7h1=a6w1;
  a7w1=a6h1/2;
  printf("\nSize of A7 - Height = %d and Width = %d", a7h1, a7w1);
  
  a8h1=a7w1;
  a8w1=a7h1/2;
  printf("\nSize of A8 - Height = %d and Width = %d", a8h1, a8w1);	
 }
