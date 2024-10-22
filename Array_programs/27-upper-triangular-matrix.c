/*27. Write a program in C to print or display an upper triangular matrix.
		Test Data :
		Input the size of the square matrix : 3
		Input elements in the first matrix :
		element - [0],[0] : 1
		element - [0],[1] : 2
		element - [0],[2] : 3
		element - [1],[0] : 4
		element - [1],[1] : 5
		element - [1],[2] : 6
		element - [2],[0] : 7
		element - [2],[1] : 8
		element - [2],[2] : 9
		Expected Output :
		The matrix is :
		1 2 3
		4 5 6
		7 8 9
	
		Setting zero in upper triangular matrix
		
		1 0 0
		4 5 0
		7 8 9
        */

#include <stdio.h>
void main()
{
	int i, j, row, col, k;

	printf("Input the size of the square matrix: \n");
	scanf("%d %d", &row, &col);

	int arr[row][col];
	printf("\nEnter the array elements: \n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("\nElements-[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\nThe matrix is: \n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j > i)
			{
				arr[i][j] = 0;
			}
		}
	}

	printf("The upper triangular matrix is: \n");
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
}

/*Output:

Input the size of the square matrix: 
2
2

Enter the array elements: 

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[1][0]: 3

Elements-[1][1]: 4

The matrix is: 
1 2 
3 4 
The upper triangular matrix is: 
1  0  
3  4                                     */