// 48. Write a C program to calculate the distance between two points

#include <stdio.h>
#include <math.h>
void main() {
    float x1,y1,x2,y2,distance;
    //double sqrt;
    printf("Enter x1 and x2 values: ");
    scanf("%f %f", &x1,&x2);
    printf("Enter the y1 and y2 values: ");
    scanf("%f %f", &y1,&y2);
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("Distance between two points:%f", sqrt(distance));
    }
