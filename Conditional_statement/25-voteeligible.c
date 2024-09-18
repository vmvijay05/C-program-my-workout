//25. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote
#include <stdio.h> 

void main()
{
  int age;
  printf("Enter the age: ");
  scanf("%d",&age);
  if (age>=18)
  {
    printf("Your eligible for vote"); 
     }
  else
    printf("you are not eligible for vote");
}
