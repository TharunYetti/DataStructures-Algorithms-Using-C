//stringlen,concatenation,comaparision,copy ,reverse
#include <stdio.h>
#include <string.h>
void main(){
	char str1[100],str2[100];
	int str1len,str2len;
	printf("ENter string 1:");
	scanf("%s",str1);
	printf("ENter string 2:");
	scanf("%s",str2);
	if(strlen(str1)==strlen(str2)){
		int i=0;
		while(str1[i]==str2[i] && i<strlen(str1))
			i++;
		if(i==strlen(str1))
			printf("Equal(0)\n");
		else{
			if(str1[0]>str2[0])
				printf("Not Equal(<0)\n");
			else
				printf("Not Equal(>0)\n");
		}
	}
	else
		if(str1[0]>str2[0])
			printf("Not Equal(<0)\n");
		else
			printf("Not Equal(>0)\n");
}
