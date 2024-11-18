/*24. Write a program in C to find the sum of the left diagonals of a matrix.
		Test Data :
		Input the size of the square matrix : 2
		Input elements in the first matrix :
		element - [0],[0] : 1
		element - [0],[1] : 2
		element - [1],[0] : 3
		element - [1],[1] : 4
		Expected Output :
		The matrix is :
		1 2
		3 4
		Addition of the left Diagonal elements is :5   */
#include <stdio.h>
void main()
{
    int i, j, size,sum=0,k;

    printf("Input the size of the square matrix: \n");
    scanf("%d", &size);

    int arr[size][size];

    printf("\nEnter the array elements: \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("\nElements-[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix is: \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    k=size;

    for (i = 0; i < size; i++)
    {
        for (j = size+1; j >0; j--)
        {
            sum=sum+arr[i][k-1];
            break;
        }
        k=k-1;
    }
    printf("The Addition of left diagonal matrix is: %d\n", sum);

}

/*Output:

Input the size of the square matrix: 
2

Enter the array elements: 

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[1][0]: 2

Elements-[1][1]: 1

The matrix is: 
1 2 
2 1 
The Addition of left diagonal matrix is: 4         */
