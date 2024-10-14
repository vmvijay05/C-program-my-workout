/*  Write a program in C to merge two arrays of the same size sorted in descending order.
        Test Data :
        Input the number of elements to be stored in the first array :3
        Input 3 elements in the array :
        element - 0 : 1
        element - 1 : 2
        element - 2 : 3
        Input the number of elements to be stored in the second array :3
        Input 3 elements in the array :
        element - 0 : 1
        element - 1 : 2
        element - 2 : 3
        Expected Output :
        The merged array in decending order is :
        3 3 2 2 1 1              */

#include <stdio.h>
void main()
{
    int n1, n2, a, i, j, k;

    printf("Enter the size of the array: \n");
    scanf("%d", &n1);

    n2 = n1 + n1;

    int arr1[n1], arr2[n1], arr3[n2];

    printf("Enter the array1 elements are: \n");
    k = 0;
    for (i = 0; i < n1; i++)
    {
        printf("Elements %d: ", i);
        scanf("%d", &arr1[i]);
        arr3[k] = arr1[i];
        k = k + 1;
    }

    printf("Enter the array2 elements are: \n");
    for (i = 0; i < n1; i++)
    {
        
        printf("Element %d: ", i);
        scanf("%d", &arr2[i]);
        arr3[k] = arr2[i];
        k = k + 1;
    }

    for (i = 0; i < n2; i++)
    {
        for (j = i + 1; j < n2; j++)
        {
            if (arr3[i] < arr3[j])
            {
                a = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = a;
            }
        }
    }
    printf("The merged decending order array is: ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", arr3[i]);
    }
}



/*Output:    

Enter the size of the array: 
4
Enter the array1 elements are: 
Elements 0: 3
Elements 1: 4
Elements 2: 8
Elements 3: 7
Enter the array2 elements are: 
Element 0: 3
Element 1: 4
Element 2: 9
Element 3: 2
The merged decending order array is: 9 8 7 4 4 3 3 2               */