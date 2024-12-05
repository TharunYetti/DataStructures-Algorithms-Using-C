//stringlen,concatenation,comaparision,copy ,reverse
#include <stdio.h>
#include <string.h>
void main(){
	char str[100],copy[100];
	int i;
	printf("ENter a string:");
	scanf("%[^\n]s",str);
	for(i=0;i<strlen(str);i++)
		copy[i]=str[i];
	puts(copy);
}
