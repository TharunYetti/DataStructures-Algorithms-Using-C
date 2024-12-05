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
		printf("ENter the total number of integer inputs:");
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++){
			printf("Enter the argument-%d:",i+1);
			scanf("%d",&arr[i]);
		}
		printf("Enter the prefix equation with the variales instead of numbers:");
		scanf("%s",str);
		int k=0;
		for(int i=strlen(str)-1;i>=0;i--){
			char ch=str[i];
			if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
				push(arr[k++]);
			else if(ch=='+' ||ch=='-' ||ch=='*' ||ch=='/' ||ch=='%'){
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
			else continue;
		}
		printf("%d\n",pop());
	}
	else if(ch==2){
		printf("ENter the total number of integer inputs:");
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++){
			printf("Enter the argument-%d:",i+1);
			scanf("%d",&arr[i]);
		}
		printf("Enter the postfix equation with some variables instead of numbers directly:");
		scanf("%s",str);
		int k=0;
		for(int i=0;i<strlen(str);i++){
			char ch=str[i];
			if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
				push(arr[k++]);
			else if(ch=='+' ||ch=='-' ||ch=='*' ||ch=='/' ||ch=='%'){
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
			else continue;
		}
		printf("%d\n",pop());
	}
	else
		printf("TATA\nBaBye\nGood Bye\n");
}
