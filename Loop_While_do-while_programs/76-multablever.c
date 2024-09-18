/* 76. Write a C program to display the multiplier table vertically from 1 to n. (to use for loop)
        Test Data :
        Input upto the table number starting from 1 : 8
        Expected Output :
        Multiplication table from 1 to 10
        1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
        ...
        1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80 */

#include <stdio.h>
void main()
{
    int i, j, n1, n2, mul = 0;
    printf("Input the number: ");
    scanf("%d", &n1);

    printf("Multiplication table from 1 to ");
    scanf("%d", &n2);

    for (i = 1; i <= n2; i++)
    {
        for (j = 1; j <= n1; j++)
        {
            printf("%d x %d = %d \t", j, i, mul = j * i);
        }
        printf("\n");
    }
}