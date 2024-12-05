//create a self refrerential structure createing stuctures until the user want to stop
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *link;
}node;
void main(){
	int data,ch;
	node *ptr=NULL;
	node *new_node;
	new_node=(node*)malloc(sizeof(node));
	if(new_node!=NULL){
		printf("Memory Allocated!\n");
		ptr=new_node;
	}
	else{
		printf("Memory not allocated");
		exit(1);
	}
	printf(">>>Enter a data(int) to insert in node:");
	scanf("%d",&data);
	new_node->data=data;
	printf("Enter -1 to stop or any other number to create another node\n>>>Enter your choice:");
	scanf("%d",&ch);
	while(ch!=-1){
		new_node=(node*)malloc(sizeof(node));
		printf(">>>Enter a data(int) to insert in node:");
		scanf("%d",&data);
		new_node->data=data;
		if(ptr!=NULL)
			new_node->link=ptr;
		printf("Enter -1 to stop or any other number to create another node\n>>>Enter your choice:");
		scanf("%d",&ch);
		ptr=new_node;
	}
	node* tharun_pointer=ptr;
	printf("-------------------------------------------------------------------\n");
	//printf("%d",ptr->data);
	//traversing through the linked list
	int i=1;
	while(ptr!=NULL){
		printf("The data in node-%d is %d\nThen,the self referential structure links to another node!\n",i,ptr->data);
		ptr=ptr->link;
		i++;
	}
	printf("-------------------------------------------------------------------\n");
	//searching though the linked list
	ptr=tharun_pointer;
	int search,isfound=0;
	printf(">>>Enter a number to search whether it is in the linked list or not:");
	scanf("%d",&search);
	int k=1;
	while(ptr!=NULL){
		if(ptr->data == search){
			printf("The data is found in node-%d\n",k);
			isfound++;
		}
		ptr=ptr->link;
		k++;
	}
	if(isfound==0)
		printf("The element you have entered is not found in the linked list\n");
}
