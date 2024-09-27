
#include <stdio.h>
void main()
{
    float marks;
    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade C\n");
    }
    else if (marks >= 60)
    {
        printf("Grade D\n");
    }
    else
    {
        switch ((int)marks / 10)
        {
        case 5:
            printf("Grade E\n");
            break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Grade F\n");
            break;
        default:
            printf("Invalid marks\n");
        }
    }
}