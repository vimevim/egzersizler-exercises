#include <stdio.h>

int main()
{	
	int integerVariable;
	char stringVariable[30];
	printf("Type a number = ");
	scanf("%d",&integerVariable);
	printf("Type a text = ");
	gets(stringVariable);
    printf("Your number is :%d\nYour text is : %s",integerVariable, stringVariable);
	return 0;
}