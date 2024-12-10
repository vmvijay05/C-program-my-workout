/*36. Write a program in C to find the missing number in a given array. There are no duplicates in the list.
        Expected Output :
        The given array is : 1 3 4 2 5 6 9 8
        The missing number is : 7    */
#include <stdio.h>
void main()
{
    int i, j, k, n, max, min, flag;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the  array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("The missing number is : ");
    for (i = min; i <= max; i++)
    {
       flag = 0;
        for (j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
}

/*Output:
Enter the size of array:6
Enter the  array elements: 
Element 0: 1
Element 1: 4
Element 2: 7
Element 3: 2
Element 4: 9
Element 5: 6
The missing number is : 3 5 8                   */

