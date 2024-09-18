/*Write a C program to print the following patterns using for loop
	Sample Output: 1
	Input the number of rows: 4

		***1
		**2 3
		*4 5 6
		7 8 9 10

	Sample Output:
	Input the number of rows: 3

		**1
		*2 3
		4 5 6 */

#include <stdio.h>
void main()
{
	int row, i, j, k, l, m = 1;
	printf("Enter the no.of rows: ");
	scanf("%d", &row);
	l = row - 1;
	for (i = 1; i <= row; i++)
	{

		for (j = 1; j <= l; j++)
		{
			printf("*");
		}
					l = l - 1;


		for (k = 1; k <= i; k++)
		{
			printf("%d ", m);
			m = m + 1;
		}
		printf("\n");
	}
}