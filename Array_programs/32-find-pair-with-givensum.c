/*32. Write a program in C to find a pair with given sum in the array.
        Expected Output :
        The given array : 6 8 4 -5 7 9
        The given sum : 15
        Pair of elements can make the given sum by the value of index 0 and 5  */

#include <stdio.h>
void main()
{
    int i, j, n, sum, total, count = 0;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the  array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the given sum: ");
    scanf("%d", &sum);

    printf("The elements in array are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            total = arr[i] + arr[j];
            if (sum == total)
            {
                printf("\nPair of elements can make the given sum by the value of index : %d %d\n", i, j);
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("\nDoes not exist!\n");
    }
}

/*Output:

Enter the size of array:7
Enter the  array elements: 
Element 0: 1
Element 1: 3
Element 2: 7
Element 3: 4
Element 4: 1
Element 5: 6
Element 6: 9
Enter the given sum: 12
The elements in array are: 1 3 7 4 1 6 9 
Pair of elements can make the given sum by the value of index : 1 6    

                (or)
                
Enter the size of array:6
Enter the  array elements: 
Element 0: 2
Element 1: 4
Element 2: 7
Element 3: 4
Element 4: 9
Element 5: 4
Enter the given sum: 12
The elements in array are: 2 4 7 4 9 4 
Does not exist!                                       */