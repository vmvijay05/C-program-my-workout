/*22. Write a program in C to find the transpose of a given matrix.
        Test Data :
        Input the rows and columns of the matrix : 2 2
        Input elements in the first matrix :
        element - [0],[0] : 1
        element - [0],[1] : 2
        element - [1],[0] : 3
        element - [1],[1] : 4
        Expected Output :
        The matrix is :

        1 2
        3 4

        The transpose of a matrix is :
        1 3
        2 4                 */

#include <stdio.h>
void main()
{
    int i, j, row, col;

    printf("Enter the size of array: \n");
    scanf("%d %d", &row, &col);

    int arr[row][col], b[row][col];

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

    // The transpose matrix moved to another array.
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            // printf("%d", arr[j][i]);
            b[j][i] = arr[j][i];
        }
    }

    printf("The transpose of a matrix is: \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ", b[j][i]);
        }
        printf("\n");
    }
}

/*Output:

Enter the size of array: 
3
2

Enter the array elements: 

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[1][0]: 3

Elements-[1][1]: 4

Elements-[2][0]: 5

Elements-[2][1]: 6

The matrix is: 
1 2 
3 4 
5 6 
The transpose of a matrix is: 
1 3 5 
2 4 6                     */