#include <stdio.h>
#include <string.h>
int ascii();
void main(){
	printf("Hello! Welcome\n");
	printf("The ASCII value of the character is %d\n",ascii());
}
int ascii(){
	char c;
	printf("Enter a character to know its ascii value:");
	scanf("%c",&c);
	return (int)c;
}
/*int str_len(){
	char name[100];
	int count=0;
	printf("Enter your name:");
	scanf("%s",name);
	return strlen(name);
	//for(int i=0;i<100;i++){
	//	if(name[i]!='\0'){
	//		printf("%c",name[i]);
	//		count++;
	//	}
	//}
	}
*/

