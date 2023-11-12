/*2.The distance between two cities(in km)is input through keyboard. 
 Write a program to convert and print the distance in meters,feet,inches and centimeters */
 
 #include<stdio.h>
 int main()
 {
  float a,km,mtr,inch,feet,cm;
  
  printf("Enter the distance between two cities in km :\t");
  scanf("%f", &km);
  
  mtr=km*1000;
  cm=mtr*100;
  inch=cm/2.54;
  feet=inch/12;
  
  printf("Distance in meters = %.2f\n",mtr);
  printf("Distance in feet = %.2f\n", feet);
  printf("Distance in centimeter = %.2f\n", cm);
  printf("Distance in inches = %.2f\n", inch);
  
} 
 
 
 
 
 
