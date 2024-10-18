/*Write a program in C for a 2D array of size 3x3 and print the matrix.
        Test Data :
        Input elements in the matrix :
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
        7 8 9                           */

#include <stdio.h>
void main()
{
    int rowsize, colsize, i, j;

    printf("Enter the row size of array: ");
    scanf("%d", &rowsize);
    printf("Enter the column size of array: ");
    scanf("%d", &colsize);

    int arr[rowsize][colsize];

    printf("Enter the array elements: \n");
    for (i = 0; i < rowsize; i++)
    {
        for (j = 0; j < colsize; j++)
        {
            printf("Element-[%d][%d]: ", rowsize, colsize);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < rowsize; i++)
    {
        for (j = 0; j < colsize; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}


/*Output:

Enter the row size of array: 3
Enter the column size of array: 4
Enter the array elements: 
Element-[3][4]: 1
Element-[3][4]: 2
Element-[3][4]: 3
Element-[3][4]: 4
Element-[3][4]: 5
Element-[3][4]: 6
Element-[3][4]: 7
Element-[3][4]: 8
Element-[3][4]: 9
Element-[3][4]: 1
Element-[3][4]: 2
Element-[3][4]: 3
1 2 3 4 
5 6 7 8 
9 1 2 3                 */
