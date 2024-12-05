//infix to post and prefix conversion 
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
char S[SIZE],array[100];
int top=-1,ind=0;
void push(char ele){
	if(top==SIZE-1){
		printf("Overrflown\n");
		return;
	}
	S[++top]=ele;
}
char pop(){
	if(top==-1){
		printf("Underflown\n");
		exit(1);
	}
	char ele=S[top--];
	return ele;
}
int priority(char c){
	if(c=='*' || c=='/') return 2;
	else if(c=='+' || c=='-') return 1;
	else return 0;
}
int isDigit(char i){
	if(i>='0' && i<='9') return 1;
	else return 0;
}
int isAlpha(char c){
	if((c>='a' && c<='z')||(c>='A' && c<='Z')) return 1;
	else return 0;
}
void main(){
	char str[100],x;
	printf("Enter the infix equation:");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0'){
		if(isDigit(str[i])||isAlpha(str[i]))
			printf("%c ",str[i]);
		else if(str[i]=='(')
			push(str[i]);
		else if (str[i]==')'){
			while((x=pop())!='(')
				printf("%c ",x);
		}
		else{
			 while(priority(S[top]) >= priority(str[i])) printf("%c ",pop());
            		 push(str[i]);
		}
		i++;
	}
	while(top!=-1)
		printf("%c ",pop());
	printf("\n");
}
