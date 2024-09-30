/* Write a program in C to count the total number of duplicate elements in an array.
        Test Data :
        Input the number of elements to be stored in the array :3
        Input 3 elements in the array :
        element - 0 : 5
        element - 1 : 1
        element - 2 : 1
        Expected Output :
        Total number of duplicate elements found in the array is : 1       */
#include <stdio.h>
void main()
{
    int i, n, count, j,k,flag;

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
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (i == 0)
            {

                if (arr[i] == arr[j])
                {
                    count = count + 1;
                    // break;
                }
            }
            else
            {
                flag=1;
                for(k=i-1;k>=0;k--)
                {
                    if(arr[i]==arr[k])
                    {
                        flag=flag+1;
                        i=i+1;
                    }
                }
                if(flag==1)
                {
                    if(arr[i]==arr[j])
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("The total no.of duplicate elements found in the array : %d\n", count);
}


/*Output:

Enter the size of array: 6
Input no.of elements in the array: 
Element 0: 5
Element 1: 4
Element 2: 5
Element 3: 3
Element 4: 5
Element 5: 3
The total no.of duplicate elements found in the array : 3           */