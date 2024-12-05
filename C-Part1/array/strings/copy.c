#include <stdio.h>
#include <string.h>
void copy(char[],char[],int);
void main(){
	char s1[]="Hello",s2[6],s3[]=" WORLD";
	strcpy(s2,s1);
	puts(s2);
	strcat(s1,s3);
	puts(s1);
}
