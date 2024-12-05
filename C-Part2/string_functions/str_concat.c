//stringlen,concatenation,comaparision,copy ,reverse
#include <stdio.h>
#include <string.h>
int len_str(char[]);
void main(){
	char str1[100],str2[100];
	int str1len,str2len;
	printf("ENter string 1:");
	scanf("%s",str1);
	printf("ENter string 2:");
	scanf("%s",str2);
	str1len=strlen(str1);
	str2len=strlen(str2);
	for(int i=str1len,j=0;i<(str1len+str2len) && j<str2len;i++,j++)
		str1[i]=str2[j];
	puts(str1);
}
int len_str(char s[]){
	int i=0,len=0;
	while(s[i]!='\0'){
		len++;
		i++;
	}
	return len;
}
