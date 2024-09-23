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
            printf(".");
        }

        test = 'A';

        for (j = 1; j <= i; j++)
        {

            printf("%c", test);
            test++;
        }
        test = 'A';

        for (k = i - 1; k >= 1; k--)
        {
            printf("%c", test);
            test++;
        }
        printf("\n");
    }
}
// printf("%c , %d\n", test,test);
// test++;
// printf("%c %d",test,test);
// return 0;