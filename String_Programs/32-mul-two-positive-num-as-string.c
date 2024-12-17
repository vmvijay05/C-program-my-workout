/*  37. Write a C program to multiply two positive numbers as strings. Return a string representation of the product.
	
		Expected Output:
		
		Original numbers: 100 and 15
		Multiple two said numbers represent as string? 1500  */

#include<stdio.h>
void main()
{
char str_name[15],str2[100];
int result,value1,value2,i;
printf("Enter the string: ");
scanf("%s",&str_name);
printf("Enter the string: ");
scanf("%s",&str2);

    while (str_name[i] != '\0') {
        value1 = value1 * 10 + (str_name[i] - '0');
        i++;
    }

        while (str2[i] != '\0') {
        value2 = value2 * 10 + (str2[i] - '0');
        i++;
    }

    result=value1*value2;

    
}