#include <stdio.h>
#include <stdlib.h>
int size=10,top=-1;
int s[10];
void push(int ele){
	if(top==size-1){
		printf("stack is overflown\n");exit(1);
	}
	top=top+1;
	s[top]=ele;
	printf("ELement successfully inserted\n");
}
int pop(){
	//here we are performing logical deletion but not physical deletion as in the case of Linked List
	if(top==-1){
		printf("Statck is underflown\n");exit(1);
	}
	int val=s[top];
	top=top-1;
	return val;
}
int peek(){
	if(top==-1){
		printf("Statck is Empty\n");
		exit(1);
	}
	return s[top];
}
void main(){
	printf("Now we are creating a stack memory\n");
	int ch;
	printf("ENter\n1-to insert an element into stack\n2-to perform pop operation\n3-to perform peek operation\n4-to print the Statck data\n5-to exit out\nEnter your choice:");
	scanf("%d",&ch);
	do{
		switch(ch){
			int val;
			case 1:{
				printf("Enter a data to insert into stack\n");
				scanf("%d",&val);
				push(val);
			}break;
			case 2:{
				val=po();
				printf("%d is deleted form the stack\n",val);
			}break;
			case 3:{
				val=peek();
				printf("%d is the last element in the stack\n",val);
			}break;
			case 4:{
				for(int i=top;i>=0;i--)
					printf("%d\n",s[i]);
			}break;
			default:printf("wrong input\n");
		}
		printf("ENter\n1-to insert an element into stack\n2-to perform pop operation\n3-to perform peek operation\n4-to print the Statck data\n5-to exit out\nEnter your choice:");
		scanf("%d",&ch);
	}while(ch>=1 && ch<=4);
}
