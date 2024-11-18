/* 38. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. 
	
		The charge are as follow :
		Unit 	Charge/unit
		upto 199 	@1.20
		200 and above but less than 400 	@1.50
		400 and above but less than 600 	@1.80
		600 and above 	@2.00
	
		If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
	
		Test Data :
		1001
		James
		800
		Expected Output :
		Customer IDNO :1001
		Customer Name :James
		unit Consumed :800
		Amount Charges @Rs. 2.00 per unit : 1600.00
		Surchage Amount : 240.00
		Net Amount Paid By the Customer : 1840.00*/
        #include <stdio.h>
#include <string.h>
void main()
{
   int custid, unit;
   char custname;
   float charge, surcharge=0, gramt,netamnt;
   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",&custname);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit);
   if (unit <200 )
    charge = 1.20;
   else if (unit>=200 && unit<400)
        charge = 1.50;
   else if (unit>=400 && unit<600)
            charge = 1.80;
   else
            charge = 2.00;
 
   gramt = unit*charge;
   if (gramt>300)
    surcharge = gramt*15/100.0;
   netamnt = gramt+surcharge;
   if (netamnt  < 100)
    netamnt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",custid);
   printf("Customer Name                       :%c\n",custname);
   printf("unit Consumed                       :%d\n",unit);
   printf("Amount Charges @Rs. %f  per unit :%f\n",charge,gramt);
   printf("Surchage Amount                     :%8.2f\n",surcharge);
   printf("Net Amount Paid By the Customer     :%8.2f\n",netamnt);
 
}
