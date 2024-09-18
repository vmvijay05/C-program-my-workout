/* 50. C program to count total number of notes in given amount
Test Data:
		Input amount: 575
		Total number of notes: 
		500: 1
		100: 0
		50: 1
		20: 1
		10: 0
		5: 1
		2: 0
		1: 0*/
	
    #include<stdio.h>
    void main(){

float amount,remain,fivehundred,hundred,fifty,twenty,ten,five,two,one;

printf("Enter the amount: ");
scanf("%f", &amount);


//fivehundred
fivehundred=amount/500;
int intergerpart=(int)fivehundred;
printf("500: %d\n", intergerpart);

remain=amount-(500*intergerpart);
//printf("rema: %f", remain);

//hundred:
hundred=remain/100;
int hundredpart=(int)hundred;
printf("100: %d\n", hundredpart);

remain=remain-(100*hundredpart);


//fifty:
fifty=remain/50;
int fiftypart=(int)fifty;
printf("50: %d\n", fiftypart);

remain=remain-(50*fiftypart);


//twenty:
twenty=remain/20;
int twentypart=(int)twenty;
printf("20: %d\n", twentypart);

remain=remain-(20*twentypart);


//ten:
ten=remain/10;
int tenpart=(int)ten;
printf("10: %d\n", tenpart);

remain=remain-(10*tenpart);


//five:
five=remain/5;
int fivepart=(int)five;
printf("5: %d\n", fivepart);

remain=remain-(5*fivepart);


//two:
two=remain/2;
int twopart=(int)two;
printf("2: %d\n", twopart);

remain=remain-(2*twopart);


//one:
one=remain/1;
int onepart=(int)one;
printf("1: %d\n", onepart);

remain=remain-(1*onepart);

}
