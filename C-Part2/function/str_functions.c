#include <stdio.h>
#include <string.h>
void main(){
	char a[15]="THARUN YETTI",b[15]="THARUN WORLD",c[15];
	printf("The length of the string is %ld\n",strlen(a));
	printf("%d\n",strcmp(a,b));
	strcpy(c,b);
	for(int i=0;i<=20;i++){
		printf("%c",c[i]);
	}
	printf("\n");
	strcat(a,b);
}
