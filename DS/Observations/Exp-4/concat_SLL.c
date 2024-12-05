//concatenation of two linked lists
#include <stdlib.h>
#include <stdio.h>
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
	while(temp!=NULL){
		printf("Data in Node-%d :%d\n",k,temp->data);
		temp=temp->link;k++;
	}
}
void main(){
	node *first,*second;
	printf("Enter the first linked list\n");
	first=createLinkedList();
	printf("Enter the second linked list\n");
	second=createLinkedList();
	if(!first && !second)
		printf("Both are empty no cancatenation can be performed\n");
	else if(!first && second){
		printf("First SLL is empty so we are returning second linked list\n");
		printLinkedList(second);
	}
	else if(first && !second){
		printf("second SLL is empty so we are returning first linked list\n");
		printLinkedList(first);
	}
	else{
		node* temp=first;
		while(temp->link!=NULL)
			temp=temp->link;
		temp->link=second;
		printLinkedList(first);
	}
}

