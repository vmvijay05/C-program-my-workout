/*   Write a C program to display the pyramid pattern using the alphabet.

      A
    A B A
  A B C B A
A B C D C B A
  */

#include <stdio.h>
void main()
{

    char test = 'A';
    int i, n, row, l, j, k, m;

    printf("Enter the no.of rows: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {

        l = row - i;
        for (m = 1; m <= l; m++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            // test = 'A';

            printf("%c", test);
            test++;
        }
        // test = 'A';
        --test;
        for (k = i - 1; k >= 1; k--)
        {
            printf("%c", --test);
        }

        printf("\n");
        test = 'A';
    }
}


/*  Output:

    Enter the no.of rows: 5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA            */


