#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
char S[SIZE],temp_rev[SIZE];
int top=-1;
void push(int ele){
	if(top==SIZE-1){
		printf("Overflown\n");return;
	}
	S[++top]=ele;
}
int pop(){
	if(top==-1){
		printf("Underflown\n");exit(1);
	}
	int ele=S[top--];
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
char* reverse(char* str){
	int len=strlen(str);
	for(int i=0;i<len/2;i++){
		char temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
	return str;
}
void main(){
	char str[SIZE],temp[SIZE],postfix_str[SIZE],prefix[SIZE];
	printf("Enter the infix expression:");
	scanf("%s",str);
	strcpy(temp,reverse(str));
	int i=0,k=0,x;
	while(temp[i]!='\0'){
		if(isalnum(temp[i])||isAlpha(temp[i])){
			postfix_str[k++]=temp[i];
		}
		else if(temp[i]=='('){
			push(temp[i]);
		}
		else if(temp[i]==')'){
			while((x=pop())!='(') postfix_str[k++]=x;
		}
		else{
			while(priority(S[top]) >= priority(temp[i]))
                		postfix_str[k++]=pop();
            		push(temp[i]);
		}
		i++;
	}
	while(top!=-1) postfix_str[k++]=pop();
	puts(postfix_str);
	puts(reverse(postfix_str));
}
