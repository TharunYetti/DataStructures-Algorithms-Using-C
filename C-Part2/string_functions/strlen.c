//stringlen,concatenation,comaparision,copy ,reverse
#include <stdio.h>
void main(){
	char str[100];
	printf("Enter a text:");
	scanf("%[^\n]s",str);
	int i=0,len=0;
	while(str[i]!='\0'){
		len++;
		i++;
	}
	printf("The length of the string is %d\n",len);
}
