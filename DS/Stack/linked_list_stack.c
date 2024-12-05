#include <stdio.h>
#include <stdlib.h>
struct stack{
	int data;
	struct stack*link;
}*top=NULL;
void push(int ele){
	struct stack*nd;
	nd=(struct stack*)malloc(sizeof(struct stack));
	if(!nd){
		printf("Memory not allocated\n");
		exit(1);
	}
	nd->data=ele;
	nd->link=top;
	top=nd;
}
int pop(){
	if(top==NULL){
		printf("Memorry Underlown\n");
		exit(1);
	}
	int val=top->data;
	struct stack* ptr=top;
	top=top->link;
	free(ptr);
	return val;
}
int peek(){
	if(top==NULL){
		printf("Stack is Empty\n");
		exit(1);
	}
	return top->data;
}
void main(){
	printf("Now we are creating a stack memory\n");
	int ch;
	printf("ENter\n1-to insert an element into stack\n2-to perform pop operation\n3-to perform peep operation\n4-to print the Statck data\n5-to exit out\nEnter your choice:");
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
				val=pop();
				printf("%d is deleted form the stack\n",val);
			}break;
			case 3:{
				val=peek();
				printf("%d is the last element in the stack\n",val);
			}break;
			case 4:{
				node* t=top;
				while(t!=NULL){
					printf("%d\n",ts->data);
					t=t->link;
				}
			}break;
			default:printf("wrong input\n");
		}
		printf("ENter\n1-to insert an element into stack\n2-to perform pop operation\n3-to perform peep operation\n4-to print the Statck data\n5-to exit out\nEnter your choice:");
		scanf("%d",&ch);
	}while(ch>=1 && ch<=4);
}
