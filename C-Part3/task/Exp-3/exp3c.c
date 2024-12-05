//read a character and inpeck it is alphabet , digit or special character

#include <stdio.h>
char inp;
void main(){
	printf("Enter a character:");
	scanf("%c",&inp);
	if( (inp>='A' && inp<='Z') || (inp>='a' && inp<='z') )
		printf("'%c' is an Alphabet.\n",inp);
	else if(inp >= '0' && inp <= '9')
		printf("'%c' is a Number.\n",inp);
	else
		printf("'%c' is a special character.\n",inp);
}
