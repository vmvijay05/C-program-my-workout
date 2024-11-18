//29. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies
#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter the x and y value: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("The coordinate point (%d,%d) lies in the first quadrant.\n",x,y);
    else if (x < 0 && y > 0)
        printf("The coordinate point (%d,%d) lies in the second quadrant.\n",x,y); 
    else if (x < 0 && y < 0)
        printf("The coordinate point (%d, %d) lies in the third quadrant.\n",x,y);
    else if (x > 0 && y < 0)
        printf("The coordinate point (%d,%d) lies in the fourth quadrant.\n",x,y);
    else if (x == 0 && y == 0)
        printf("The coordinate point (%d,%d) lies at the center.\n",x,y);
}
