/*     Write a program in C to convert an octal number into binary.
        Test Data :
        Input an octal number (using digit 0 - 7) :57
        Expected Output :
        The Octal Number : 57
        The equivalent Binary Number : 101111            */

#include <stdio.h>
void main()
{
    int n, binary = 0, decimal = 0, base = 1, mod, tempDecimal;
    printf("Enter an octal number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        mod = n % 10;
        decimal =decimal+ mod * base;
        n =n/10;
        base=base*8;
    }

    base = 1;

    while (decimal != 0)
    {
        tempDecimal = decimal % 2;
        binary += tempDecimal * base;
        decimal=decimal/2;
        base=base*10;
    }
    printf("The binary number is: %d\n", binary);
}


/*Output: 

Enter an octal number: 272
Binary equivalent: 10111010     */