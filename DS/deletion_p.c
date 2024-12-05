#include <stdio.h>
#include <stdlib.h>
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
		n_node->link=NULL;
		temp_link=n_node;
		if(i==1)
			h_ptr=n_node;
	}
	return h_ptr;
}
node* deleteFirstNode(node* root){
	node* temp=root;
	root=root->link;
	free(temp);
	return root;
}
node* deleteLastNode(node* root){
	node* prev=root,*ptr=root->link;
	while(ptr->link!=NULL){
		prev=ptr;
		ptr=ptr->link;
	}
	prev->link=NULL;
	free(ptr);
	return root;
}
node* deleteMiddleNode(node* root){
	int val;
	printf("Enter the data of the node you want to delete:");
	scanf("%d",&val);
	if(root->data==val){
		root=deleteFirstNode(root);
	}
	node* prev=root,*ptr=root->link;
	while(ptr!=NULL && ptr->data!=val){
		prev=ptr;
		ptr=ptr->link;
	}
	if(!ptr){
		printf("No such node found\n");
	}
	else{
		prev->link=ptr->link;
	}
	return root;
}
node* deleteBeforeGivenNode(node* root){
	int val;
	printf("Enter the data of the reference node to delete before node:");
	scanf("%d",&val);
	if(root->data==val){
		printf("No previous node found\n");
	}
	else if(root->link->data==val){
		root=deleteFirstNode(root);
	}
	else{
		node* prev=root,*ptr=root->link;
		while(ptr->link!=NULL && ptr->link->data!=val){
			prev=ptr;
			ptr=ptr->link;
		}
		if(!ptr->link){
			printf("No such reference node found\n");
		}
		else{
			prev->link=ptr->link;
			free(ptr);
		}
	}
	return root;
}
node* deleteAfterGivenNode(node*root){
	int val;
	printf("Enter the data of the reference node to delete successive node:");
	scanf("%d",&val);
	if(root->data==val){
		node* temp=root->link;
		root->link=temp->link;
		free(temp);
	}
	else{
		node* ptr=root,*after=root->link;
		while(after!=NULL && ptr->data!=val){
			ptr=after;
			after=after->link;
		}
		if(after==NULL){
			printf("No successive node found\n");
		}
		else{
			ptr->link=after->link;
			free(after);
		}
	}
	return root;
}
void main(){
	node* root=createLinkedList();
	printLinkedList(root);
	int ch2;
	printf("-------------Deleting a node from the Single Linked List-------------\n1-to delete first node\n2-to delete end node\n3-to delete a node containing the given data\n4-to delete the node before the given node\n5-to delere the node after the given node\nOther- to quit\nenter yout choice:");
	scanf("%d",&ch2);
	switch(ch2){
		case 1:root=deleteFirstNode(root);break;
		case 2:root=deleteLastNode(root);break;
		case 3:root=deleteMiddleNode(root);break;
		case 4:root=deleteBeforeGivenNode(root);break;
		case 5:root=deleteAfterGivenNode(root);break;
		default:printf("Quitting the Deletion Opeartion\nThank you\nBabyee\n");
	}
	printLinkedList(root);
}

