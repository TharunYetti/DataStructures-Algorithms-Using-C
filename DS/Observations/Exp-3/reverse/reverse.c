#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node*link;
}node;
node* createLinkedList(){
	node* temp=NULL,*head;
	int ch=1,val;
	do{
		node* new_node=(node*)malloc(sizeof(node));
		if(!new_node){
			printf("memory is not allocated\n");
			exit(1);
		}
		if(temp!=NULL)
			temp->link=new_node;
		else
			head=new_node;
		printf("Enter the data:");
		scanf("%d",&val);
		new_node->data=val;
		new_node->link=NULL;
		temp=new_node;
		printf("Enter any number to continue or \'0\' to exit:");
		scanf("%d",&ch);
	}while(ch);
	return head;
}
node* reverse(node* head){
	node* ptr=head,*temp=NULL,*move=head;
	while(ptr!=NULL){
		move=ptr->link;
		ptr->link=temp;
		temp=ptr;
		ptr=move;
	}
	return temp;
}
void printLinkedList(node* head){
	node* t=head;
	while(t!=NULL){
		printf("%d\n",t->data);
		t=t->link;
	}
}
void main(){
	node* head=createLinkedList();
	head=reverse(head);
	printLinkedList(head);
}
