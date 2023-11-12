/*Consider a currency system in which there are notes of seven denominations, namely, Rs. 1,2,5,10,50,100. If a
sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that 
will combine to give Rs.N*/

#include<stdio.h>

int main()
{
 int hundred,fifty,ten,five,two,one,amt,tot_notes;
 
 printf("Enter the amount to calculate the smallest number of notes which can combine for this amount :\t");
 scanf("%d",&amt);
 
 //no.of hundred rupee notes
 hundred=amt/100;
 amt=amt%100; //remaining amount
 
 //no.of fifty rupee notes
 fifty=amt/50;
 amt=amt%50; //remaining amount
 
 //no.of ten rupee notes
 ten=amt/10;
 amt=amt%10;
 
 //no.of five rupee notes
 five=amt/5;
 amt=amt%5; //remaining amount
 
 //no.of two rupee notes
 two=amt/2;
 amt=amt%2; //remaining amount
 
 //no.of one rupee notes
 one=amt/1;
 amt=amt%1; //remaining amount
 
 tot_notes=hundred+fifty+ten+five+two+one;
 
 printf("Smallest number of notes :%d",tot_notes);	
 
 return 0;
}
