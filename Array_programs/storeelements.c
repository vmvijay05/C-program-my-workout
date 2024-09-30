/*Write a program in C to store elements in an array and print them.
        Test Data :
        Input 10 elements in the array :
        element - 0 : 1
        element - 1 : 1
        element - 2 : 2
        .......
        Expected Output :
        Elements in array are: 1 1 2 3 4 5 6 7 8 9          */

#include <stdio.h>
void main()
{
    int arr[10];
    int i;

    printf("Enter the 10 array elements: \n");
    for (i = 0; i < 10; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements in array are: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}



/*Output:  

   Enter the 10 array elements: 
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Element 5: 6
Element 6: 7
Element 7: 8
Element 8: 9
Element 9: 10
The elements in array are: 1 2 3 4 5 6 7 8 9 10         */