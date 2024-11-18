/*23. Write a program in C to find the sum of the right diagonals of a matrix.
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
        Addition of the right Diagonal elements is :5         */

#include <stdio.h>
void main()
{
    int i, j, size,sum=0;

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

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum=sum+arr[j][j];
        }
        break;
    }
    printf("The Addition of right diagonal matrix is: %d\n", sum);

}

/*Output:

Input the size of the square matrix: 
3

Enter the array elements: 

Elements-[0][0]: 1

Elements-[0][1]: 2

Elements-[0][2]: 3

Elements-[1][0]: 4

Elements-[1][1]: 5

Elements-[1][2]: 6

Elements-[2][0]: 7

Elements-[2][1]: 8

Elements-[2][2]: 9

The matrix is: 
1 2 3 
4 5 6 
7 8 9 
The Addition of right diagonal matrix is: 15         */
