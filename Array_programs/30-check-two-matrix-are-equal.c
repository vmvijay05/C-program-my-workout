/*30. Write a program in C to accept two matrices and check whether they are equal.
        Test Data :
        Input Rows and Columns of the 1st matrix :2 2
        Input Rows and Columns of the 2nd matrix :2 2
        Input elements in the first matrix :
        element - [0],[0] : 1
        element - [0],[1] : 2
        element - [1],[0] : 3
        element - [1],[1] : 4
        Input elements in the second matrix :
        element - [0],[0] : 1
        element - [0],[1] : 2
        element - [1],[0] : 3
        element - [1],[1] : 4
        Expected Output :
        The first matrix is :
        1 2
        3 4
        The second matrix is :
        1 2
        3 4
        The Matrices can be compared :
        Two matrices are equal.  */

#include <stdio.h>
void main()
{
    int i, j, r1, r2, c1, c2, flag = 0;

    printf("Input the size of 1st array: \n");
    scanf("%d %d", &r1, &c1);

    printf("Input the size of 2nd array: \n");
    scanf("%d %d", &r2, &c2);

    int arr1[r1][c1], arr2[r2][c2];

    printf("\nEnter first array elements: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\nElements-[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter second array elements: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("\nElements-[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nThe first matrix is: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    if (r1 == r2 && c1 == c2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                if (arr1[i][j] != arr2[i][j])
                {
                    flag = 1;
                }
            }
        }
        if (flag == 0)
        {
            printf("Two matrices are equal\n");
        }
        else
            printf("Two matrices are not equal\n");
    }

    else
        printf("Two matrices are not equal\n");
}


/*Output:

Input the size of 1st array: 
2
3
Input the size of 2nd array: 
2
3

Enter first array elements: 

Elements-[0][0]: 9

Elements-[0][1]: 8

Elements-[0][2]: 7

Elements-[1][0]: 6

Elements-[1][1]: 5

Elements-[1][2]: 5

Enter second array elements: 

Elements-[0][0]: 9

Elements-[0][1]: 8

Elements-[0][2]: 7

Elements-[1][0]: 6

Elements-[1][1]: 5

Elements-[1][2]: 5

The first matrix is: 
9 8 7 
6 5 5 

The second matrix is: 
9 8 7 
6 5 5 
Two matrices are equal            */