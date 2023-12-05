/*b.Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the number of students and the number of subjects
he has failed in. Use the following logic:

1)if the student gets first class and the number of subjects he failed in is greater than 3,
then he does not get any grace.
Other wise the grace is 5 per subject.

2)If the student gets second class and the number of subjects 
he failed is greate than 2, then he does not get any grace.
Otherwise the grace is of 4 per subjects.

3)If the student gets third class and the number of subjects he failed 
is greater than 1, he does not get any grace marks.
Otherwise the grace is of 5 marks*/

#include <stdio.h>

int main()
{
   int class, num;

   printf("\nEnter the class earned by the student(1st,2nd,3rd) :\t");
   scanf("%d", &class);

   switch(class)
   {
      case 1:
         printf("Enter the no. of subjects failed :\t");
         scanf("%d", &num);

         if(num<=3)
         {
            printf("\nGrace marks : 5 per subject i.e %d", num * 5);
         }
         else
            printf("\nNo Grace Marks");
      break;

      case 2:
         printf("Enter the no. of subjects failed :\t");
         scanf("%d", &num);

         if(num<=2)
         {
            printf("\nGrace marks : 4 per subject i.e %d", num * 4);
         }
         else
            printf("\nNo Grace Marks");
      break;

      case 3:
         printf("Enter the no. of subjects failed :\t");
         scanf("%d", &num);

         if(num<=1)
         {
            printf("\nGrace marks : 5 per subject i.e %d", num * 5);
         }
         else
            printf("\nNo Grace Marks");
      break;

      default:
         printf("\nWrong class entered.");

   }
   
   return(0);

}