#include <stdio.h>
int len(char[],int);
void main(){
	printf("Enter a string:");
	char s[100];
	scanf("%[^\n]",s);
	//int len=0;
	//while(s[len]!=0){
	//	len++;
	//}
	printf("The length of the string is %d\n",len(s,0));
	
}
int len(char s[],int k){
	if(s[k]!=0)
		return 1+len(s,k+1);
	else
		return 0;
}
