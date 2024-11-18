//34. Write a C program to check whether a triangle can be formed with the given values for the angles
#include <stdio.h>  // Include the standard input/output header file.

void main()  
{  
    int a, b, c, sum;

    printf("Input three angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c); 
    sum = a + b + c;   
    if(sum == 180)   
    {  
        printf("The triangle is valid");
    }  
    else  
    {  
        printf("The triangle is not valid");
    }  
 }
