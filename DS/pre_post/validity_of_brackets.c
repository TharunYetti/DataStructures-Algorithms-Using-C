#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int S[100],size=100,top=-1;
void push(int ele){
	S[++top]=ele;
}
int pop(){
	int ele=S[top--];
	return ele;
}
int peek(){
	return S[top];
}
void main(){
	char str[100];
	int ele;
	printf("ENter the expression to check the validity of paranthesis:");
	scanf("%s",str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]=='{' ||str[i]=='[' ||str[i]=='(' ){
			push(str[i]);
		}
		else if(str[i]=='}'||str[i]==']'||str[i]==')'){
			if(str[i]=='}' && peek()=='{') ele=pop();
			else if( str[i]==']' && peek()=='[' ) ele=pop();
			else if(str[i]==')' && peek()=='(') ele=pop();
			else{
				printf("Given statement is not valid\n");exit(1);
			}
		}
		else continue;
	}
	if(top==-1){
		printf("Given expression is valid\n");
	}
	else{
		printf("Given statement is not valid\n");
	}
}

