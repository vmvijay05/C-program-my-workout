/*   Write a program in C to convert a decimal number into binary without using an array.
        Test Data :
        Input a decimal number: 25
        Binary number equivalent to said decimal number is: 11001    */

#include <stdio.h>
void main()
{
    int i, n, base, ans, mod, val = 0, m;

    base = 2;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    ans = n;
    m = 1;
    for (i = 1; ans != 0; i++)
    {
        mod = ans % 2;
        ans = ans / base;
        // printf("%d ", mod);
        val = val + (m * mod);
        m = m * 10;
    }
    printf("%d ", val);
}

/*   Output:
    Enter the number: 36
    100100            */