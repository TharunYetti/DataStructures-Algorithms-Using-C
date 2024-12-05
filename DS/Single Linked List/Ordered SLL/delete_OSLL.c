//insertion in ordered sll
#include <stdio.h>
#include <stdlib.h>
typedef struct name{
	int data;
	struct name*link;
}node;
node* createLinkedList(){
	printf("Enter how many nodes do you want to create:");
	int num,data;
	scanf("%d",&num);
	node *h_ptr=NULL,*ptr=NULL,*n_node,*temp_link=NULL;
	for(int i=1;i<=num;i++){
		n_node=(node*)malloc(sizeof(node));
		if(temp_link!=NULL)
			temp_link->link=n_node;
		printf("Enter data:");
		scanf("%d",&data);
		n_node->data=data;
		n_node->link=NULL;
		temp_link=n_node;
		if(i==1)
			h_ptr=n_node;
	}
	return h_ptr;
}
node* sortInAscend(node* h_ptr){
	node *ptr1=h_ptr,*ptr2=NULL;
	while(ptr1->link!=NULL){
		ptr2=ptr1->link;
		while(ptr2!=NULL){
			if( (ptr1->data)>(ptr2->data) ){
				int temp=ptr1->data;
				ptr1->data=ptr2->data;
				ptr2->data=temp;
			}
			ptr2=ptr2->link;
		}
		ptr1=ptr1->link;
	}
	return h_ptr;
}
void printLinkedList(node* h_ptr){
	node *temp=h_ptr;
	int i=1;
	while(temp!=NULL){
		printf("Data-%d:%d\n",i,temp->data);
		i++;
		temp=temp->link;
	}
}
void main(){
	node *head,*temp;
	int val;
	head=createLinkedList();
	head=sortInAscend(head);
	printf("SLL is Sorted!\n");
	printLinkedList(head);
	printf("Enter a data of the node to delete from the Ordered SLL:");
	scanf("%d",&val);
	if(head->data==val){
		temp=head;
		head=head->link;
		free(temp);
	}
	else{
		node *ptr=head,*prev=ptr;
		while(ptr!=NULL && ptr->data<val){
			prev=ptr;
			ptr=ptr->link;
		}
		if( ptr==NULL || ptr->data!=val){
			printf("No node found with that data\n");
			exit(1);
		}
		else{
			prev->link=ptr->link;
			free(ptr);
		}
	}
	printLinkedList(head);
}
