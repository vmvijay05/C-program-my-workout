/*      Write a C program to convert an octal number to a decimal without using an array.
        Test Data :
        Input an octal number (using digit 0 - 7) :745
        Expected Output :
        The Octal Number : 745
        The equivalent Decimal Number : 485          */

#include <stdio.h>
void main()
{

    int num, n1, n, base = 1, sum = 0, i, j, mod;
    printf("Enter the octal number: ");
    scanf("%d", &num);

    j = 1;

    for (i = num; i > 0; i = i / 10)
    {
        mod = i % 10;

        if (j == 1)
        {
            base = base * 1;
        }
        else
            base = base * 8;

        sum = sum + (mod * base);
        j = j + 1;
    }
    printf("The decimal number is: %d\n", sum);
}

/*   Output:
Enter the octal number: 140
The decimal number is: 96    */