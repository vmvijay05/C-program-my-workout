/*Write a C program to print the following patterns using for loop.
Sample Output:1
	
		Input the number of rows: 5
		
		1	1	1	1	1
		1	1	1	1	1
		1	1	1	1	1
		1	1	1	1	1
		1	1	1	1	1
	
	Sample Output: 2
	
		Input the number of rows: 3
		
		1	1	1
		1	1	1
		1	1	1  */


#include<stdio.h>
void main()
{

int row,i,j;
printf("Enter the no.of rows: ");
scanf("%d", &row);
for(i=1;i<=row;i++)
{
    for(j=1;j<=row;j++)
    {
        printf("1 ");
    }
    printf("\n");
}
}