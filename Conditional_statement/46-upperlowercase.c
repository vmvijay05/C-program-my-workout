/*
	46. Write a C program to check whether a character is uppercase or lowercase alphabet.
		Test Data:
		Input any one character: R
		The entered character 'R' is uppercase*/
        #include<stdio.h>
        void main(){
            char n;
            printf("Enter your alphabet: ");
            scanf("%c", &n);
            if (n >= 'a' && n <= 'z'){
            printf("It is a lowercase character");
            }
            else if(n >= 'A' && n <= 'Z'){
            printf("It is a uppercase character");
            }
            else
            printf("It is not alphabet");
        }
