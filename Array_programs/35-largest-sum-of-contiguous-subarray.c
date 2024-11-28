/*	
35. Write a program in C to find the largest sum of 		contiguous subarrays in an array.
		Expected Output :
		The given array is : 8 3 8 -5 4 3 -4 3 5
		The largest sum of contiguous subarray is : 21
*/


#include<stdio.h>
void main()
{
    int i, j, k, n, max,sum;

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

    for (i = 0; i <n; i++)
    {
        printf("%d ", arr[i]);
    }

     max= arr[0];

    for ( i = 0; i < n; i++)
     {
        sum = 0;

        for ( j= i; j< n; j++) 
        {
            sum =sum+ arr[j];
            if (sum > max) {
                max= sum;
            }
        }
    }
    printf("The largest sum of contiguous subarrays is: %d\n", max);
}