#include <stdio.h>
#include <stdlib.h>
typedef struct name{
	int data;
	struct name*link;
}node;
node* createLinkedList(){
	printf("ENter how may nodes do you want to create:");
	int num;
	scanf("%d",&num);
	node* h_ptr,*temp_link=NULL;
	for(int i=1;i<=num;i++){
		node* new_node=(node*)malloc(sizeof(node));
		if(temp_link!=NULL)
			temp_link->link=new_node;
		else
			h_ptr=new_node;
		printf("Enter data to append in node-%d:",i);
		scanf("%d",&(new_node->data));
		new_node->link=NULL;
		temp_link=new_node;
	}
	return h_ptr;
}
void main(){
	node* head=createLinkedList();
	printf("Now we are traversing each data in the Single Linked List!\n");
	int k=1;
	node* temp=head;
	while(temp!=NULL){
		printf("Data in Node-%d :%d\n",k,temp->data);
		k++;
		temp=temp->link;
	}
}