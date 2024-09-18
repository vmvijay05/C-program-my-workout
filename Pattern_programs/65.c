/*      Write a C program to print the following patterns using for loop:
	10. Sample Output:
	
		Input the number of rows: 6
		
		1
		2 2
		3 3 3
		4 4 4 4
		5 5 5 5 5
		6 6 6 6 6 6    */


#include <stdio.h>
void main()
{
    int row, i, j, k;
    printf("Enter the no.of rows: ");
    scanf("%d", &row);

    for(i=1;i<=row;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

}