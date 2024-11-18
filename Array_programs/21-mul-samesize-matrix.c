/*	21. Write a program in C for the multiplication of two square matrices.
        Test Data :
        Input the rows and columns of first matrix : 2 2
        Input the rows and columns of second matrix : 2 2
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
        The multiplication of two matrix is :

        19 22
        43 50        */

#include <stdio.h>
void main()
{
    int i, j, k, row, col;

    printf("Enter the size of array: \n");
    scanf("%d %d", &row, &col);

    int a[row][col], b[row][col], c[row][col];

    printf("\nEnter the first array elements: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nElements-[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the second array elements: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nElements-[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < col; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("The multiplication array is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

/*Output:

Enter the size of array:
3
3

Enter the first array elements:

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[0][2]: 3

Elements-[1][0]: 4

Elements-[1][1]: 5

Elements-[1][2]: 6

Elements-[2][0]: 7

Elements-[2][1]: 8

Elements-[2][2]: 9

Enter the second array elements:

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[0][2]: 3

Elements-[1][0]: 4

Elements-[1][1]: 5

Elements-[1][2]: 6

Elements-[2][0]: 7

Elements-[2][1]: 8

Elements-[2][2]: 9
The multiplication array is:
30 36 42
66 81 96
102 126 150                                     */
