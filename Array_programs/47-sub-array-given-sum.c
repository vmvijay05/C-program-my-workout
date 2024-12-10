/*47. Write a program in C to find a subarray with a given sum from the given array.
		Expected Output :
		The given array is : 3 4 -7 1 3 3 1 -4
		[0..1] -- { 3 4 }
		[0..5] -- { 3 4 -7 1 3 3 }
		[3..5] -- { 1 3 3 }
		[4..6] -- { 3 3 1 }            */


#include <stdio.h>
void main()
{
    int i, j, k, n, sum=0,temp;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the  array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
    {
        k=i,sum=0;
        for(j=i;j<=k;j++)
        {
            sum=sum+arr[i]+arr[j];

            if(sum==temp)
            {

            }
            k++;
        }
    }
}