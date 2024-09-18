//28. Write a C program to find the largest of three numbers
#include <stdio.h>

void main()
{
    int n1, n2, n3;

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", n1, n2, n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("The 1st Number is the greatest among three. \n");
        }
        else
        {
            printf("The 3rd Number is the greatest among three. \n");
        }
    }
    else if (n2 > n3)
        printf("The 2nd Number is the greatest among three \n");
    else
        printf("The 3rd Number is the greatest among three \n");
}
