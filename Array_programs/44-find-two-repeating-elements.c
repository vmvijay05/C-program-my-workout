/*44. Write a program in C to find the two repeating elements in a given array.
        Expected Output :
        The given array is : 2 7 4 7 8 3 4
        The repeating elements are: 7 4   */

#include <stdio.h>
void main()
{
    int i, n, count, j, k, flag;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input no.of elements in the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    count = 0;
    printf("The repeating elements are: ");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (i == 0)
            {

                if (arr[i] == arr[j])
                {
                    printf("%d ", arr[i]);
                }
            }
            else
            {
                flag = 1;
                for (k = i - 1; k >= 0; k--)
                {
                    if (arr[i] == arr[k])
                    {
                        flag++;
                    }
                }
                if (flag == 1)
                {
                    if (arr[i] == arr[j])
                    {
                        // count++;
                        printf("%d ", arr[i]);
                    }
                }
            }
        }
    }
}

/*Output:

Enter the size of array: 8
Input no.of elements in the array:
Element 0: 0
Element 1: 2
Element 2: 0
Element 3: 3
Element 4: 5
Element 5: 6
Element 6: 3
Element 7: 6
The repeating elements are: 0 3 6               */
