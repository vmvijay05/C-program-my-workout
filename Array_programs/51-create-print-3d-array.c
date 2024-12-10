/*Create a 3D array of size 3x3x3 and fill it with numbers. Print the array.*/

#include <stdio.h>
void main()
{
    int arr[3][2][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
               printf("Element - [%d] [%d] [%d]: ",i,j,k);
               scanf("%d",&arr[i][j][k]);
            }
        }
    }

    printf("3D Array is:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }
}


/*Output:
Element - [0] [0] [0]: 1
Element - [0] [0] [1]: 2
Element - [0] [1] [0]: 3
Element - [0] [1] [1]: 4
Element - [1] [0] [0]: 5
Element - [1] [0] [1]: 6
Element - [1] [1] [0]: 7
Element - [1] [1] [1]: 8
Element - [2] [0] [0]: 9
Element - [2] [0] [1]: 9
Element - [2] [1] [0]: 8
Element - [2] [1] [1]: 7
3D Array is:
Layer 1:
1 2
3 4
Layer 2:
5 6
7 8
Layer 3:
9 9
8 7                    */
