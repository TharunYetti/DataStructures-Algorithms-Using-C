#include<stdio.h>
void main(){
	char i;
	printf("Enter any character to check: \n");
	scanf("%c",&i);
	if(i>='a' && i<='z'){
		printf("entered character is lowercase\n");
		}
	else if(i>='A' && i<='Z')
	 	printf("given alphabet is a uppercase\n");
 	else 
 		printf("Given character is not an alphabet \n");
 	if((i>='a' && i<='z') || (i>='A' && i<='Z'))
 	{
 	printf("The ascii value of given alphabet = %d \n",i);
 	if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U'||i=='a'|| i=='e'||i=='i' || i=='o' || i=='u')
 	printf("given alphabet is an vowel \n ");
 	else 
 	printf("given alphabet is a consonant \n");
 	}
 }	 
	 	
