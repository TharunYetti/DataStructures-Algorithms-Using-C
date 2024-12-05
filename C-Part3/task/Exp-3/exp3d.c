//Read alphabet whenther it is  1) lower case or upper case 2) vowel or consonant 3) ascii value of a character

#include <stdio.h>
char alph;
void main(){
	printf("Enter an alphabet:");
	scanf("%c",&alph);
	if(alph >= 'A' && alph <= 'Z')
		printf("'%c' is an Upper Case letter.\n",alph);
	else if(alph >= 'a' && alph <= 'z')
		printf("'%c' is a Lower case letter.\n",alph);
	else
		printf("You have entered wrong input, You may get some logical errors.\n");
	if(alph == 'a'|| alph=='e'||alph=='i'||alph=='o'||alph=='u'||alph=='A'||alph=='E'||alph=='I'||alph=='O'||alph=='U' )
		printf("'%c' is a Vowel.\n",alph);
	else
		printf("'%c' is a consonant.\n",alph);
	printf("ASCII Value of the gven character is %d.\n",alph);
}
