/*Write a program in C to count the frequency of each element of an array.
        Test Data :
        Input the number of elements to be stored in the array :3
        Input 3 elements in the array :
        element - 0 : 25
        element - 1 : 12
        element - 2 : 43
        Expected Output :
        The frequency of all elements of an array :
        25 occurs 1 times
        12 occurs 1 times
        43 occurs 1 times
*/

#include <stdio.h>
void main()
{
    int i, n, count = 0, j, flag = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input no.of elements in the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < i; j++)
        {

            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count = 1;
            for (j = 0; j < n; j++)
            {

                if (arr[i] == arr[j] && i != j)
                {
                    count++;
                }
            }

            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}