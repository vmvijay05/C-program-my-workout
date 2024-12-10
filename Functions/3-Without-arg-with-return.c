// Without Argument With Return
// Subtraction of two numbers:

#include <stdio.h>
float sub();
void main()
{
    int subtract, a, b;
    subtract = sub();
    printf("The subtraction of two numebers are: %d", subtract);
}

float sub()
{
    int sub, a, b;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);
    sub = a - b;
    return sub;
}

/*Output:

Enter the two numbers: 54
30
The subtraction of two numebers are: 24          */