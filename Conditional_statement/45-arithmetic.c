/* 45. Write a program in C which is a Menu-Driven Program to perform a simple calculation
Sample output: 
Enter the first Integer :10                                                                                   
Enter the second Integer :2                                                                                   
                                                                                                              
Input your option :                                                                                           
1-Addition.                                                                                                   
2-Substraction.                                                                                               
3-Multiplication.                                                                                             
4-Division.                                                                                                   
5-Exit.                                                                                                       
3                                                                                                             
The Multiplication of 10  and 2 is: 20 */
#include <stdio.h>

void main()
{
  int n1,n2,num,total;
  printf("Enter two numbers :");
  scanf("%d%d",&n1,&n2);
  printf("Input your option :\n 1. Add\n 2. Sub\n 3. Mul\n 4. Div.\n");
  scanf("%d", &num);
  if(num==1)
  {
    total=n1+n2;
    printf("The addition of two numbers is: %d", total);

  }
  else if(num==2)
  {
    total=n1-n2;
    printf("The subtraction of two numbers is: %d", total);
}
else if(num==3)
  {
    total=n1*n2;
    printf("The multiply of two numbers is: %d", total);
}
else if(num==4)
  {
    total=n1/n2;
    printf("The division of two numbers is: %d", total);
}
else
printf("Invalid number");

}
