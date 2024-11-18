/*Write a program in C to print Floyd's Triangle. (to use for loop and while loop)

        1
        01
        101
        0101
        10101     */

#include <stdio.h>
void main()
{

    int i, n, j, k, count = 1;
    printf("Enter the no.of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    
    {
      //  count = count;
    
        for (j = 1; j <= i; j++)
        {

            if (count % 2 == 0)
            {
                if (j %2== 0)
                {
                    printf("1 ");
                }
                else
                    printf("0 ");
            }
            else
            {
                if (j %2 == 0)
                {
                    printf("0 ");
                }
                else
                    printf("1 ");
            }
        }
        count++;
        printf("\n");
    }
}