/*      Write a C program to print the following patterns using for loop:
        Sample Output: 1
        Input the number of rows: 4

        ***1
        **12
        *123
        1234   */

#include <stdio.h>
void main()
{
    int row, i, j, k, r;
    printf("Enter the no.of rows: ");
    scanf("%d", &row);
    r = row - 1;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= r; j++)
        {
            printf("*");
        }
        r = r - 1;

        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }
}