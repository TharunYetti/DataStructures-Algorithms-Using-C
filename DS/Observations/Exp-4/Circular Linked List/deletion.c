#include <stdio.h>
#include <stdlib.h>
typedef struct name{
	int data;
	struct name* link;
}node;
node* createCircularLL(){
	printf("How many nodes do you want to create:");
	int n;
	scanf("%d",&n);
	node* start=NULL,*ptr;
	for(int i=1;i<=n;i++){
		node* new_node=(node*)malloc(sizeof(node));
		printf("Enter data:");
		scanf("%d",&(new_node->data));
		if(i==1){
			start=new_node;
			new_node->link=new_node;
		}
		else{
			ptr=start;
			while(ptr->link!=start)
				ptr=ptr->link;
			ptr->link=new_node;
			new_node->link=start;
		}
	}
	return start;
}
void printCircularLL(node* start){
	node*ptr=start;
	int k=1;
	while(ptr->link!=start){
		printf("Data-%d:%d\n",k,ptr->data);
		k++;
		ptr=ptr->link;
	}
	printf("Data-%d:%d\n",k,ptr->data);
}
node* deleteFirstNode(node* start){
	node* ptr=start;
	while(ptr->link!=start)
		ptr=ptr->link;
	ptr->link=start->link;
	free(start);
	start=ptr->link;
	return start;
}

node* deleteLastNode(node* start){
	node* ptr=start,*prev;
	while(ptr->link!=start){
		prev=ptr;
		ptr=ptr->link;
	}
	prev->link=start;
	free(ptr);
	return start;
}
node* deleteMiddleNode(node* start){
	printf("enter the data of the node to delete:");
	int val;
	scanf("%d",&val);
	if(start->data==val)
		start=deleteFirstNode(start);
	else{
		node* ptr=start,*prev=start;
		while(ptr->link!=start && ptr->data!=val){
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=ptr->link;
		free(ptr);
	}
	return start;
}
node* deleteBeforeGivenNode(node* start){
	printf("ENter the value of reference node:");
	int val;
	scanf("%d",&val);
	if(start->data==val)
		start=deleteLastNode(start);
	else if(start->link->data==val)
		start=deleteFirstNode(start);
	else{
		node *ptr=start,*prev=start;
		while(ptr->link!=start && ptr->link->data!=val){
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=ptr->link;
		free(ptr);
	}
	return start;
}
//errrrrorrrrrrr
node* deleteAfterGivenNode(node *start){
	printf("ENter the value of reference node:");
	int val;
	scanf("%d",&val);
	node *ptr=start,*prev=start;
	if(start->data==val){
		node* temp=start->link;
		start->link=temp->link;
		free(temp);
	}
	else{
		while(prev->link!=start && prev->data!=val){
			prev=ptr;
			ptr=ptr->link;
		}
		if(prev->data==val)
			start=deleteFirstNode(start);
		else{
			prev->link=ptr->link;
			free(ptr);
		}
	}
	return start;
}
void main(){
	node* start=createCircularLL();
	printf("DO you want to delete a new node from the circular linked list(1-for yes\t 0- for no):");
	int ch1,ch2,ch3,val;
	scanf("%d",&ch1);
	if(ch1==1){
		printf("Options\n1-to delete first node\n2-to delete last node\n3-to delete specific node\n4-to delete node before gievn node\n5- to delete node after the given node\nother- to quit the operation\nEnter your choice:");
		scanf("%d",&ch2);
		switch(ch2){
			case 1:start=deleteFirstNode(start);break;
			case 2:start=deleteLastNode(start);break;
			case 3:start=deleteMiddleNode(start);break;
			case 4:start=deleteBeforeGivenNode(start);break;
			case 5:start=deleteAfterGivenNode(start);break;
			default:printf("Closing the deletion operation\n");
		}
	}
	printCircularLL(start);
}
