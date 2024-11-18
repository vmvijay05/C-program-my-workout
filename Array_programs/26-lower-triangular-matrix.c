/*26. Write a program in C to print or display the lower triangular of a given matrix.
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

		Setting zero in lower triangular matrix

		1 2 3
		0 5 6
		0 0 9     */

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
			if (j < i)
			{
				arr[i][j] = 0;
			}
		}
	}

	printf("The lower triangular matrix is: \n");
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
4
4

Enter the array elements: 

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[0][2]: 3

Elements-[0][3]: 4

Elements-[1][0]: 5

Elements-[1][1]: 6

Elements-[1][2]: 7

Elements-[1][3]: 8

Elements-[2][0]: 9

Elements-[2][1]: 9

Elements-[2][2]: 8

Elements-[2][3]: 7

Elements-[3][0]: 6

Elements-[3][1]: 5

Elements-[3][2]: 4

Elements-[3][3]: 3

The matrix is: 
1 2 3 4 
5 6 7 8 
9 9 8 7 
6 5 4 3 
The lower triangular matrix is: 
1  2  3  4  
0  6  7  8  
0  0  8  7  
0  0  0  3                               */
