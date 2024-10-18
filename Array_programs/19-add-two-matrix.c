/*Write a program in C for adding two matrices of the same size.
		Test Data :
		Input the size of the square matrix (less than 5): 2
		Input elements in the first matrix :
		element - [0],[0] : 1
		element - [0],[1] : 2
		element - [1],[0] : 3
		element - [1],[1] : 4
		Input elements in the second matrix :
		element - [0],[0] : 5
		element - [0],[1] : 6
		element - [1],[0] : 7
		element - [1],[1] : 8
		Expected Output :
		The First matrix is :

		1 2
		3 4
		The Second matrix is :

		5 6
		7 8
		The Addition of two matrix is :

		6 8
		10 12   */

#include <stdio.h>
void main()
{
	int row, col, i, j;

	printf("Enter the size of row and column: \n");
	scanf("%d \n%d", &row, &col);

	int a1[row][col], a2[row][col], a3[row][col];

	printf("\nEnter the first array elements: \n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("\nElements-[%d][%d]: ", i, j);
			scanf("%d", &a1[i][j]);
		}
	}

	printf("\nEnter the second array elements: \n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("\nElements-[%d][%d]: ", i, j);
			scanf("%d", &a2[i][j]);
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			a3[i][j] = a2[i][j] + a1[i][j];
		}
	}
	printf("\nThe sum of the two matrix is: \n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", a3[i][j]);
		}
		printf("\n");
	}
}


/*Output:
Enter the size of row and column: 
2
2

Enter the first array elements: 

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[1][0]: 3

Elements-[1][1]: 4

Enter the second array elements: 

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[1][0]: 3

Elements-[1][1]: 4

The sum of the two matrix is: 
2 4 
6 8                            */
