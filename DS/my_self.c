#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *link; 
};
void printLinkedList(struct node* tharun){
	struct node*temp=tharun;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->link;
	}
	
}
void main(){
	struct node *head,*first,*second;
	//creatinf nodes
	head=(struct node*)malloc(sizeof(struct node));
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	//assigning values
	head->data=10;
	first->data=20;
	second->data=30;
	//linking
	head->link=first;
	first->link=second;
	second->link=NULL;
	//printing data
	printf("HEad data:%d\n",head->data);
	printf("first data:%d\n",first->data);
	printf("second data:%d\n",second->data);
	
	printf("first data:%d\n",head->link->data);
	printf("second data:%d\n",first->link->data);
	printf("Second data(through head):%d\n",head->link->link->data);
	printf("USing loops\n");
	printLinkedList(head);
}

