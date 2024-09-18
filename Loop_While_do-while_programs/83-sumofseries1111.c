/*Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
        Test Data :
        Input the number of terms : 5
        Expected Output :
        1 + 11 + 111 + 1111 + 11111
        The Sum is : 12345  */

#include <stdio.h>
void main()
{
    int i, n, sum = 0, result = 1;

    printf("Enter the no.of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + result;
        printf("%d ", result);
        result = (result * 10) + 1;
    }

    printf("The sum of the series is: %d\n", sum);
}


/*Output:
Enter the no.of terms: 4
1 11 111 1111 The sum of the series is: 1234  */