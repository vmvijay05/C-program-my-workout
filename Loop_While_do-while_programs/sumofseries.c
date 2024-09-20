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
    int i, n, j, x, k, sum = 1, l, s, m, mul;

    printf("Enter the no.of terms: ");
    scanf("%d", &n);

    printf("Enter the x value: ");
    scanf("%d", &x);

    // printf("%d ", x);
    k = 1;
    l = 1;

    for (i = 1; i <= n; i++)
    {
        sum = 1;
        j = 1;
        while (j <= k)
        {
            sum = sum * x;
            j++;
            // printf("sum=%d  ", sum);
        }
        k = k + 2;
        // printf("\n%d ", sum);
        m = sum;
        //if (i % 2 == 0)
            mul = m * l;
        // else
        //     mul = m;

        printf("%d \n", mul);
        s = s + mul;
        
        l = l * (-1);
    }
    printf("\nsum=%d ", s);
}


/* Output:

Enter the no.of terms: 5
Enter the x value: 2
2 
-8 
32 
-128 
512 

sum=410*/
