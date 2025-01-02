#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    int n, i;
    n = 5;
    printf("Enter number of elements: %d\n", n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");
        for (i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
        n = 10;
        printf("\n\nEnter the new size of the array: %d\n", n);
        ptr = (int *)realloc(ptr, n * sizeof(int));

        if (ptr == NULL)
        {
            printf("Reallocation Failed\n");
            exit(0);
        }
        printf("Memory successfully re-allocated using realloc.\n");

        for (i = 5; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
        free(ptr);
    }
}