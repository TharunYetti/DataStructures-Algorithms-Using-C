//insertion in a linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct name{
	int data;
	struct name *link;
}node;
void printLinkedList(node* h_ptr){
	node *temp=h_ptr;
	int i=1;
	while(temp!=NULL){
		printf("Data-%d:%d\n",i,temp->data);
		i++;
		temp=temp->link;
	}
}
void printPictorially(node *h_ptr){
	node *temp=h_ptr;
	while(temp!=NULL){
		printf("%d --> ",temp->data);
		temp=temp->link;
	}
	printf("NULL\n");
}
void main(){
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
		temp_link=n_node;
		if(i==num)
			n_node->link=NULL;
		if(i==1)
			h_ptr=n_node;
	}
	/*
	node *head,*first,*second;
	head=(node*)malloc(sizeof(node));
	first=(node*)malloc(sizeof(node));
	second=(node*)malloc(sizeof(node));
	head->link=first;
	first->link=second;
	second->link=NULL;
	node *ptr=head;
	int data,ch;
	while(ptr!=NULL){
		printf("Enter data:");
		scanf("%d",&data);
		ptr->data=data;
		ptr=ptr->link;
	}
	*/
	printf("Now the linked list contains three nodes with respective name head,first and second\nWhere do you want to insert the new node\n0-Intial(At head)\n1-Between head and first\n2=Between first and second\n.\n.\n.\n%d=at tail\nOther-To exit the program\n",num);
	printf("Enter you choice:");
	int new_data,ch;
	scanf("%d",&ch);
	node *new_node;
	new_node=(node*)malloc(sizeof(node));
	printf("ENter your data:");
	scanf("%d",&new_data);
	new_node->data=new_data;
	if(ch==0){
		new_node->link=h_ptr;
		h_ptr=new_node;
	}
	else if(ch==num){
		ptr=h_ptr;
		for(int i=1;i<num;i++)
			ptr=ptr->link;
		ptr->link=new_node;
	}
	else if(ch>=1 && ch<=num-1){
		node *t_ptr=h_ptr;
		for(int i=1;i<ch;i++)
			t_ptr=t_ptr->link;
		new_node->link=t_ptr->link;
		t_ptr->link=new_node;
	}
	else{
		printf("Invalid Input\nSorry Bye!\n");
		exit(1);
	}
	printLinkedList(h_ptr);
	printPictorially(h_ptr);
}
