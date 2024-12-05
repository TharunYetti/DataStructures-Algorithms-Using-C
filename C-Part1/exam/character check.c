#include<stdio.h>
void main()
{
	char b;
	printf("Enter the character: ");
	scanf("%c",&b);
	if(b>='a' && b<='z')
	printf("The entered character is lowercase alphabet \n");
	else if(b>='A' && b<='Z')
	printf("The entered character is uppercase alphabet \n");
	else if(b>='0' && b<='9')
	printf("The entered character is a digit \n");
	else 
	printf("The entered character ia a special character \n");
}
