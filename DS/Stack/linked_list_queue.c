#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node*link;
}node;
node *f=NULL,*r=NULL;
void push(int ele){
	node* nd=(node*)malloc(sizeof(node));
	if(!nd){
		printf("memory not allocated\n");
		exit(1);
	}
	nd->data=ele;
	nd->link=NULL;
	if(!f && !r){
		f=nd;
		r=nd;
	}
	else{
		r->link=nd;
		r=nd;
	}
}
int pop(){
	if(f==0){
		printf("queue is underflown\n");
		exit(1);
	}
	int val=f->data;
	node *temp=f;
	if(f==r){
		f=0;r=0;
	}
	else
		f=f->link;
	free(temp);
	return val;
}
void main(){
	printf("Now we are creating a stack memory\n");
	int ch;
	printf("Enter\n1-to insert an element into queue\n2-to perform pop operation\n3-to print the queue data\n4-to exit out\nEnter your choice:");
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
				node* t=f;
				while(t!=NULL){
					printf("%d\n",t->data);
					t=t->link;
				}
			}break;
			default:printf("wrong input\n");
		}
		printf("ENter\n1-to insert an element into queue\n2-to perform pop operation\n3-to print the queue data\n4-to exit out\nEnter your choice:");
		scanf("%d",&ch);
	}while(ch>=1 && ch<=4);
}
