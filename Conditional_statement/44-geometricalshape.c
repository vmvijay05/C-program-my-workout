/* 44. Write a C program which computes the area of various geometrical shapes using a menu-driven approach:
Input 1 for area of circle                                                                                    
Input 2 for area of rectangle                                                                                 
Input 3 for area of triangle                                                                                  
Input your choice : 1                                                                                         
Input radious of the circle : 5                                                                               
The area is : 78.500000*/
#include<stdio.h>
void main()
{
    float x,y,z,area,b;
    int r,n,l,w,h;
    printf("Input 1 for area of circle: \n");
    printf("Input 2 for area of rectangle: \n");
    printf("Input 3 for area of triangle: \n");
    printf("Input your choice: ");
    scanf("%d", &n);
    if(n==1){ 
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    area=3.14*r*r; 
    }
    else if(n==2)
    {
    printf("Input length and width of the rectangle : ");
    scanf("%d%d",&l,&w);
    area=l*w;
    }
    else if(n==3){
    printf("Input the base and height of the triangle:");
    scanf("%f%d",&b,&h);
    area=0.5*b*h;
    }
    else{
    printf("Invalid");
    }
    printf("The area is : %f", area);

}
