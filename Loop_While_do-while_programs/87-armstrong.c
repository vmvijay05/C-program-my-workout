/*   87. Write a C program to check whether a given number is an Armstrong number or not.
        Test Data :
        Input a number: 153
        Expected Output :
        153 is an Armstrong number*/

#include <stdio.h>
void main()
{
    int i = 0, n, n1, n2, n3, sum = 0, given, j;

    printf("Enter the number: ");
    scanf("%d", &n);

    given = n;
    // find given number count:
    while (given != 0)
    {
        given = given / 10;
        i++;
    }

    // find armstrong number:
    given = n;
    while (n != 0)
    {
        n2 = n % 10;
        n3 = 1;
        for (j = 1; j <= i; j++)
        {
            n3 = n3 * n2;
        }
        //  printf("count=%d\n", n3);
        n = n / 10;
        sum = sum + n3;
        // i++;
    }
    printf("sum = %d\n", sum);
    if (sum == given)
    {
        printf("It is a armstrong number.\n");
    }
    else
        printf("It is not armstrong number.\n");
}

/*Output:
Enter the number: 153
count=27
count=125
count=1
sum = 153
It is a armstrong number.  */