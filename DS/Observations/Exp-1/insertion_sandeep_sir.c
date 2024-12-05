#include <stdlib.h>
#include <stdio.h>
typedef struct name{
	int data;
	struct name*link;
}node;
void printLinkedList(node* h_ptr){
	node *temp=h_ptr;
	int i=1;
	while(temp!=NULL){
		printf("Data-%d:%d\n",i,temp->data);
		temp=temp->link;i++;
	}
}
node* createLinkedList(){
	int num,data;
	printf("Enter how many nodes do you want to create:");
	scanf("%d",&num);
	node *h_ptr=NULL,*ptr=NULL,*n_node,*temp_link=NULL;
	for(int i=1;i<=num;i++){
		n_node=(node*)malloc(sizeof(node));
		if(temp_link!=NULL)
			temp_link->link=n_node;
		printf("Enter data:");
		scanf("%d",&(n_node->data));
		//n_node->data=data;
		n_node->link=NULL;
		temp_link=n_node;
		if(i==1)
			h_ptr=n_node;
	}
	return h_ptr;
}
node* insertAtBegining(node* start,node* new_node){
	new_node->link=start;
	start=new_node;
	return start;
}
node* insertAtEnd(node* start,node* new_node){
	node *ptr=start;
	while(ptr->link!=NULL)
		ptr=ptr->link;
	ptr->link=new_node;
	return start;
}
node* insertBeforeKey(node* start,node* new_node){
	int key;
	printf("Enter the data of the key node:");
	scanf("%d",&key);
	node *ptr=start,*prev;
	while(ptr->data!=key){
		prev=ptr;
		ptr=ptr->link;
	}
	if(ptr==start)
		start=insertAtBegining(start,new_node);
	else{
		new_node->link=ptr;
		prev->link=new_node;
	}
	return start;
}
node* insertAfterKey(node* start,node* new_node){
	int key;
	printf("Enter the data of the key node:");
	scanf("%d",&key);
	node *ptr=start,*prev=start;
	while(prev->data!=key){
		prev=ptr;
		ptr=ptr->link;
	}
	new_node->link=ptr;
	prev->link=new_node;
	return start;
}
node* deleteFirstNode(node* h_ptr){
	node* temp=h_ptr;
	h_ptr=h_ptr->link;
	free(temp);
	return h_ptr;
}
node* deleteLastNode(node* h_ptr){
	node* ptr=h_ptr,*prev=h_ptr;
	while(ptr->link!=NULL){
		prev=ptr;
		ptr=ptr->link;
	}
	prev->link=NULL;
	free(ptr);
	return h_ptr;
}
node* deleteMiddleNode(node* h_ptr){
	int val;
	printf("Enter the data of the node you want to delete:");
	scanf("%d",&val);
	if(h_ptr->data==val)
		h_ptr=deleteFirstNode(h_ptr);
	else{
		node* ptr=h_ptr,*prev=h_ptr;
		while(ptr->data!=val){
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=ptr->link;
		free(ptr);
	}
	return h_ptr;
}
node* deleteBeforeGivenNode(node* h_ptr){
	int val;
	printf("Enter the data of the reference node to delete before node:");
	scanf("%d",&val);
	if(h_ptr->data==val)
		printf("No previous node found, so returning the same head node adress\n");
	else if(h_ptr->link->data==val)
		h_ptr=deleteFirstNode(h_ptr);
	else{
		node*ptr=h_ptr,*prev=h_ptr;
		while((ptr->link)->data!=val){
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=ptr->link;
		free(ptr);
	}
	return h_ptr;
}
node* deleteAfterGivenNode(node* h_ptr){
	int val;
	printf("Enter the data of the reference node to delete successive node:");
	scanf("%d",&val);
	if(h_ptr->data==val){
		node* temp=h_ptr->link;
		h_ptr->link=temp->link;
		free(temp);
	}
	else{
		node *ptr=h_ptr,*prev=h_ptr;
		while(prev->data!=val){
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=ptr->link;
		free(ptr);
	}
	return h_ptr;
}
void main(){
	node* h_ptr;
	h_ptr=createLinkedList();
	int ch1,ch2;
	node*new_node=(node*)malloc(sizeof(node));
	printf("Enter the data for the new node:");
	scanf("%d",&(new_node->data));
	new_node->link=NULL;
	printf("------------Inseting a node into Single Linked List--------------\n1-to insert at begining\n2-to insert at End\n3-to insert before the key node\n4-to insert after the key node\nOther- to quit the operation\nenter your choice:");
	scanf("%d",&ch1);
	switch(ch1){
		case 1:h_ptr=insertAtBegining(h_ptr,new_node);break;
		case 2:h_ptr=insertAtEnd(h_ptr,new_node);break;
		case 3:h_ptr=insertBeforeKey(h_ptr,new_node);break;
		case 4:h_ptr=insertAfterKey(h_ptr,new_node);break;
		default:printf("Quitting the Insetion Operation!!\n");
	}
	printLinkedList(h_ptr);
	printf("-------------Deleting a node from the Single Linked List-------------\n1-to delete first node\n2-to delete end node\n3-to delete a node containing the given data\n4-to delete the node before the given node\n5-to delere the node after the given node\nOther- to quit\nenter yout choice:");
	scanf("%d",&ch2);
	switch(ch2){
		case 1:h_ptr=deleteFirstNode(h_ptr);break;
		case 2:h_ptr=deleteLastNode(h_ptr);break;
		case 3:h_ptr=deleteMiddleNode(h_ptr);break;
		case 4:h_ptr=deleteBeforeGivenNode(h_ptr);break;
		case 5:h_ptr=deleteAfterGivenNode(h_ptr);break;
		default:printf("Quitting the Deletion Opeartion\nThank you\nBabyee\n");
	}
	printLinkedList(h_ptr);
}
