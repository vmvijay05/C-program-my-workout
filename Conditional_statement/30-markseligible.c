//30. Write a C program to determine eligibility for admission to a professional course based on the following criteria:
	
		//Eligibility Criteria :
	
	//	Marks in Maths >=65
	//	and Marks in Phy >=55
	//	and Marks in Chem>=50
	//	and Total in all three subject >=190
	//	or Total in Maths and Physics >=140
	#include <stdio.h>
void main()
{
    int ph, ch, ma;

    printf("Enter the mark in Physics :");
    scanf("%d", &ph);
    printf("Enter the mark in Chemistry :");
    scanf("%d", &ch);
    printf("Enter the mark in Mathematics :");
    scanf("%d", &ma);

    printf("Total marks for three subjects : %d\n", ma + ph + ch);
    printf("Total marks of Maths and Physics : %d\n", ma + ph);
    if(ma>=65 && ph>=55 && ch>=50)
{
    printf("The candidate is eligible for admission.\n");
    
}
else
  printf("The candidate is not eligible.\n");

}
