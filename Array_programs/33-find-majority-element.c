/*33. Write a program in C to find the majority element of an array.
        A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
        Expected Output :
        The given array is : 4 8 4 6 7 4 4 8
        There are no Majority Elements in the given array.       */

#include <stdio.h>
void main()
{
    int i, j, k, n, flag, count, sum, major = 1;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the  array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements in array are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    sum = n / 2;

    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (i == 0)
            {

                if (arr[i] == arr[j])
                {
                    count++;
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
                        count++;
                    }
                }
            }
        }
        if (sum < count)
        {
            printf("\nThe majority element is : %d\n", arr[i]);
            major++;
        }
    }
    if (major == 1)
    {
        printf("\nThere here are no Majority Elements in the given array\n");
    }
}

/*Output:
Enter the size of array:7
Enter the  array elements: 
Element 0: 2
Element 1: 6
Element 2: 6
Element 3: 6
Element 4: 6
Element 5: 3
Element 6: 2
The elements in array are: 2 6 6 6 6 3 2 
The majority element is : 6                   */