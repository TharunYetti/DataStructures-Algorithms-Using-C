#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int S[SIZE],top=-1;
void push(int ele){
	if(top==SIZE-1){
		printf("overflown");
		return;
	}
	top=top+1;
	S[top]=ele;
}
int pop(){
	if(top==-1){
		printf("Undeflown");
		exit(1);
	}
	int ele=S[top];
	top=top-1;
	return ele;
}
void main(){
	int arg1,arg2,ch,n;
	char str[30];
	printf("Enter your operation 1-for prefix expresion and 2-for postfix expression:");
	scanf("%d",&ch);
	if(ch==1){
		printf("Enter the prefix equation:");
		scanf("%s",str);
		for(int i=strlen(str)-1;i>=0;i--){
			char ch=str[i];
			if(isdigit(ch))
				push(ch-'0');
			else{
				arg1=pop();
				arg2=pop();
				if(ch=='+')
					push(arg1+arg2);
				else if(ch=='-')
					push(arg1-arg2);
				else if(ch=='*')
					push(arg1*arg2);
				else if(ch=='/')
					push(arg1/arg2);
				else if(ch=='%')
					push(arg1%arg2);
			}
		}
		printf("%d\n",pop());
	}
	else if(ch==2){
		printf("Enter the postfix equation:");
		scanf("%s",str);
		for(int i=0;i<strlen(str);i++){
			char ch=str[i];
			if(isdigit(ch))
				push(str[i]-'0');
			else{
				arg2=pop();arg1=pop();
				if(ch=='+')
					push(arg1+arg2);
				else if(ch=='-')
					push(arg1-arg2);
				else if(ch=='*')
					push(arg1*arg2);
				else if(ch=='/')
					push(arg1/arg2);
				else
					push(arg1%arg2);
			}
		}
		printf("%d\n",pop());
	}
	else
		printf("TATA\nBaBye\nGood Bye\n");
}
