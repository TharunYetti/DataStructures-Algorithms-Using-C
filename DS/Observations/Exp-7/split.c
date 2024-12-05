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
void main(){
	node* head=createLinkedList(),*ptr=head,*second;;
	printf("Enter the data of the node to split into two linked lists:");
	int val;
	scanf("%d",&val);
	while(ptr!=NULL){
		if(ptr->data==val){
			second=ptr->link;
			ptr->link=NULL;
			break;
		}
		else{
			ptr=ptr->link;
		}
	}
	if(second==NULL){
		printf("Please selct middle data;Not splitted\n");exit(1);
	}
	else if(ptr==NULL){
		printf("No such data found,invalid attempt\n");exit(1);
	}
	printf("printing...\nFirst list--> ");
	node* t1=head,*t2=second;
	while(t1!=NULL){
		printf("%d ",t1->data);
		t1=t1->link;
	}
	printf("\nSecond list--> ");
	while(t2!=NULL){
		printf("%d ",t2->data);
		t2=t2->link;
	}
	printf("\nByee\n");
}
