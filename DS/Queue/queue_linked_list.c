#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node*link;
}node;
node *f=NULL,*r=NULL;
void enqueue(int ele){
	node* new_node;
	new_node=(node*)malloc(sizeof(node));
	if(!new_node){
		printf("Memory NOt allocated");
		return;
	}
	new_node->data=ele;
	new_node->link=NULL;
	if(f==NULL){
		f=new_node;
		r=new_node;
	}
	else{
		r->link=new_node;
		r=new_node;
	}
}
int dequeue(){
	if(!f){
		printf("Memory is UnderFlown");
		exit(1);
	}
	int val=f->data;
	node *ptr=f;
	if(f==r){
		f=NULL;
		r=NULL;
	}
	else
		f=f->link;
	free(ptr);
	return val;
}
void main(){
	printf("Now we are creating a stack memory\n");
	int ch;
	printf("ENter\n1-to insert an element into queue\n2-to perform pop operation\n3-to print the queue data\n4-to exit out\nEnter your choice:");
	scanf("%d",&ch);
	do{
		switch(ch){
			int val;
			case 1:{
				printf("Enter a data to insert into queue\n");
				scanf("%d",&val);
				enqueue(val);
			}break;
			case 2:{
				val=dequeue();
				printf("%d is deleted form the queue\n",val);
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
	}while(ch>=1 && ch<=3);
}
