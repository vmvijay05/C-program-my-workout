//27. Write a C program to accept the height of a person in centimeters and categorize the person according to their height
#include <stdio.h>

void main()
{
    float height;
    printf("Enter the human height:");
    scanf("%f", &height);
    if (height<150){
        printf("The person is dwarf");
    }
    else if ((height >= 150) && (height < 165)){
        printf("The person is average height");
    }
    else
        printf("The person is taller.\n");
}
