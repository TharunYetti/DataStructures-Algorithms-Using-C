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
	node *head,*start;
	start=(node*)malloc(sizeof(node));
	start=createLinkedList();
	head->data=0;
	head->link=start;
	//deletion of node from SLL thourgh a temporary head
	node *prev=head;
	node *cur=head->link;
	int val;
	printf("Enter the data in the node you want to delete:");
	scanf("%d",&val);
	while(cur!=head && cur->data<val){
		prev=cur;
		cur=cur->link;
	}
	if(cur->data!=val || cur==head){
		printf("No given node found in SLL\n");
		exit(1);
	}
	prev->link=cur->link;
	free(cur);
	printLinkedList(head);
}
