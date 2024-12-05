//sorting of a linked list
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
node* sortInDescend(node* h_ptr){
	node *ptr1=h_ptr,*ptr2=NULL;
	while(ptr1->link!=NULL){
		ptr2=ptr1->link;
		while(ptr2!=NULL){
			if( (ptr1->data)<(ptr2->data) ){
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
	int ch;
	node* h_ptr;
	h_ptr=createLinkedList();
	printf("How do you want to sort the list\n1-for ascending order\n2-for descending order\nEnter choice:");
	scanf("%d",&ch);
	if(ch==1)
		h_ptr=sortInAscend(h_ptr);
	else if(ch==2)
		h_ptr=sortInDescend(h_ptr);
	else{
		printf("Invalid input\n");
		exit(1);
	}
	printLinkedList(h_ptr);
}
