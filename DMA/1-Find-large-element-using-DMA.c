// Find the largest element using Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n;
    float *ptr;
    printf("Input total number of elements: ");
    scanf("%d", &n);

    ptr = (float *)calloc(n, sizeof(float)); /* (or)  ptr=(int *)malloc(n*sizeof(int));  */
    if (ptr == NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        printf("Element-%d: ", i + 1);
        scanf("%f", ptr + i);
    }

    for (i = 1; i < n; i++)
    {
        if (*ptr < *(ptr + i))
        {
            *ptr = *(ptr + i);
        }
    }
        free(ptr);
    printf("The Largest element is : %.2f\n\n", *ptr);
}
