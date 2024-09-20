/* Write a program in C to find the sum of the series [ x - x^3 + x^5 - ......].
        Test Data :
        Input the value of x :2
        Input number of terms : 5
        Expected Output :
        The values of the series:
        2
        -8
        32
        -128
        512
        The sum = 410    */

#include <stdio.h>
void main()
{
    int i, n, j, x, k, sum = 1;

    printf("Enter the no.of terms: ");
    scanf("%d", &n);

    printf("Enter the x value: ");
    scanf("%d", &x);

    printf("%d ", x);

    for (i = 1; i <= n; i++)
    {
        k = 3;
        j = 1;
        while (j <= k)
        {
            sum = sum * x;
            j++;
            // printf("sum=%d  ", sum);
        }
        k = k + 2;
        printf("\n%d ", sum);
    }
}