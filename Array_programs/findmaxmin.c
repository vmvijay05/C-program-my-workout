/*      Write a program in C to find the maximum and minimum elements in an array. 
		Test Data :
		Input the number of elements to be stored in the array :3
		Input 3 elements in the array :
		element - 0 : 45
		element - 1 : 25
		element - 2 : 21
		Expected Output :
		Maximum element is : 45
		Minimum element is : 21             */

#include <stdio.h>
void main()
{
    int n, a, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr1[n];

    printf("Enter the array1 elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d: ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] > arr1[j])
            {
                a = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = a;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==0){
    printf("The minimum element is: %d\n",arr1[i]);
    }
    else if(i==n-1)
    {
         printf("The maximum element is: %d\n",arr1[i]);
    }
    }   
}

/* Output:
Enter the size of the array: 7
Enter the array1 elements are: 
Elements 0: 4
Elements 1: 3
Elements 2: 16
Elements 3: 57
Elements 4: 23
Elements 5: 15
Elements 6: 10
The minimum element is: 3
The maximum element is: 57         */



