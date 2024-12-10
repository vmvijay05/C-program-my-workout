// With Argument With Return
// Addition of two numbers:

#include <stdio.h>

int addition(int a, int b)
{
    int sum1;
    sum1 = a + b;
    return sum1;
}

void main()
{
    int a, b, sum;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);

    sum = addition(a, b);
    printf("The sum is: %d", sum);
}

/*Output:

Enter the two numbers: 54
23
The sum is: 77                        */