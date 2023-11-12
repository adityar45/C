/*3.If the marks obtained by a student in five different subjects are input through keyboard, write a program 
to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can
be obtained by a student in each subject is 100.*/

#include<stdio.h>
 int main()
 {
  float sub1,sub2,sub3,sub4,sub5,total;
  float percent;
  
  printf("Enter the marks of 1st subject :\t");
  scanf("%f",&sub1);
  printf("Enter the marks of 2nd subject :\t");
  scanf("%f",&sub2);
  printf("Enter the marks of 3rd subject :\t");
  scanf("%f",&sub3);
  printf("Enter the marks of 4th subject :\t");
  scanf("%f",&sub4);
  printf("Enter the marks of 5th subject :\t");
  scanf("%f",&sub5);	
  
  total = sub1+sub2+sub3+sub4+sub5;
  percent = ((float)total/500)*100;
  
  printf("\nAggregate marks out of 500 : %.2f\n",total);
  printf("Percentage : %.2f\n", percent); 
  
  
 }
