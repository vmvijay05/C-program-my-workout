// With Argument Without Return
// Addition of two numbers:

#include <stdio.h>

void add(int a, int b);

void main()
{
    int a, b;
    printf("Enter the two values: ");
    scanf("%d %d", &a, &b);
    add(a, b);
}

void add(int a, int b)
{
    int sum;
    sum = a + b;
    printf("The sum of two variables: %d",sum);
}
