/* 84. Write a C program to check whether a given number is a 'Perfect' number or not.
        Test Data :
        Input the number : 56
        Expected Output :
        The positive divisor : 1 2 4 7 8 14 28
        The sum of the divisor is : 64
        So, the number is not perfect   */

#include <stdio.h>
void main()
{
    int i, n, r, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nThe sum is: %d\n", sum);
    if (sum == n)
    {
        printf("The number is perfect number\n");
    }
    else
        printf("The given number is not perfect\n");
}

/*Output:
Enter the number: 6
1 2 3
The sum is: 6
The number is perfect number  */
