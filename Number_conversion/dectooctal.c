/*     Write a program in C to convert a decimal number into octal without using an array.
        Test Data :
        Enter a number to convert : 79
        Expected Output :
        The Octal of 79 is 117.      */

#include <stdio.h>
void main()
{
    int i, n, base, ans, mod, val = 0, m;

    base = 8;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    ans = n;
    m = 1;
    for (i = 1; ans != 0; i++)
    {
        mod = ans % 8;
        ans = ans / base;
        // printf("%d ", mod);
        val = val + (m * mod);
        m = m * 10;
    }
    printf("The octal number is: %d\n", val);
}

/*Output:

Enter the number: 186
The octal number is: 272          */