/* Find string length using fgets function*/

#include <stdio.h>
void main()
{
	int length=0,i;
	char str_name[15];
	printf("Enter the string: ");
	//scanf("%s", &str_name);
    //fgets(str_name,sizeof(str_name),stdin);
    gets(str_name);

	for (i = 0; str_name[i] != '\0'; i++)
	{
		length++;
	}

	printf("Length of the string is: %d",length);
}
