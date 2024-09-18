/*Write a C program to print the following patterns using for loop
Sample Output: 1
	
		Input the number of rows: 4 
		
		1
		12
		123
		1234 */

#include<stdio.h>
void main()
{
    int row,i,j;
    printf("Enter the no.of rows: ");
    scanf("%d", &row);

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

printf("\n");

    }
}