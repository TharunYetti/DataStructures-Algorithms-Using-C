//in head/tail method the linked list is assumed to be ordered(ascending or descending)
#include <stdio.h>
#include <stdlib.h>
typedef struct name{
	int data;
	struct name*link;
}node;
node* createLinkedList(){
	node *h_ptr,*temp_link=NULL;
	printf("Enter how many nodes do you want to create:");
	int num;
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		node* new_node=(node*)malloc(sizeof(node));
		if(temp_link!=NULL)
			temp_link->link=new_node;
		else
			h_ptr=new_node;
		printf("Enter data:");
		scanf("%d",&(new_node->data));
		new_node->link=NULL;
		temp_link=new_node;
	}
	return h_ptr;
}
void printLinkedList(node* h_ptr){
	node* temp=h_ptr;
	int k=1;
	while(temp->link!=h_ptr){
		printf("Data in Node-%d :%d\n",k,temp->data);
		temp=temp->link;k++;
	}
	printf("Data in Node-%d :%d\n",k,temp->data);
	
}
void main(){
	node *head,*start,*nd;
	start=(node*)malloc(sizeof(node));
	start=createLinkedList();
	head->data=0;
	head->link=start;
	node* temp=start;
	while(temp->link!=NULL)
		temp=temp->link;
	temp->link=head;
	//insertion in SLL through a temporary head node
	node *prev=head,*cur=head->link;
	nd=(node*)malloc(sizeof(node));
	printf("Enter the data of the node to insert it:");
	scanf("%d",&(nd->data));
	nd->link=NULL;
	while(cur!=head && cur->data < nd->data){
		prev=cur;
		cur=cur->link;
	}
	prev->link=nd;
	nd->link=cur;
	printLinkedList(head);
	//deletion from SLL thourgh a temporary head
	prev=head;
	cur=head->link;
	int val;
	printf("enter the data in the node you want to delete:");
	scanf("%d",&val);
	while(cur!=head && cur->data<val){
		prev=cur;
		cur=cur->link;
	}
	if( cur==head || cur->data!=val){
		printf("No given node found in SLL\n");
		exit(1);
	}
	else{
		prev->link=cur->link;
		free(cur);
	}
	printLinkedList(head);
}
