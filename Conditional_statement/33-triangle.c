//33. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene. 
#include<stdio.h>
void main()
{
   int side1, side2, side3;
   printf("Enter three sides of the triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   if(side1 == side2 && side2 == side3)
      printf("The is equilateral Triangle");
   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("The is isosceles Triangle");
   else
      printf("The is scalene Triangle");
}		

