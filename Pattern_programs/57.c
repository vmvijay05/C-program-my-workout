/*Write a C program to print the following patterns using for loop
Sample Output: 1
	
		Input the row value: 4
		
		1	2	3	4
		1	2	3	4
		1	2	3	4
		1	2	3	4
		
	Sample Output: 2
	
		Input the row value: 3
		
		1	2	3
		1	2	3
		1	2	3 */

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
        printf("%d ",j);
    }
    printf("\n");
}
}