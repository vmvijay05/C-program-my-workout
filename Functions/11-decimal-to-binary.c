/*6. Write a program in C to convert a decimal number to a binary number using the function.
        Test Data :
        Input any decimal number : 65
        Expected Output :

        The Binary value is : 1000001        */

// With Argument With Return:
#include <stdio.h>
int dectobinary(int);
void main()
{
    int num, val, bin;
    printf("Enter the decimal number: ");
    scanf("%d", &num);
    bin = dectobinary(num);
    printf("%d ", bin);
}

int dectobinary(int num)
{
    int base, ans, m, i, mod, val = 0;
    base = 2;
    ans = num;
    m = 1;
    for (i = 1; ans != 0; i++)
    {
        mod = ans % 2;
        ans = ans / base;
        val = val + (m * mod);
        m = m * 10;
    }
    return val;
}

/*Output:
Enter the decimal number: 23
10111           */
