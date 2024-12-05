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
node* insertAtBegining(node* start,node* new_node){
	node* ptr=start;
	while(ptr->link!=start)
		ptr=ptr->link;
	new_node->link=start;
	ptr->link=new_node;
	start=new_node;
	return start;
}
node* insertAtEnd(node* start,node* new_node){
	node* ptr=start;
	while(ptr->link!=start)
		ptr=ptr->link;
	ptr->link=new_node;
	new_node->link=start;
	return start;
}
node* insertBeforeGivenNode(node* start,node* new_node){
	printf("ENter the value of reference node:");
	int val;
	scanf("%d",&val);
	if(start->data==val)
		start=insertAtBegining(start,new_node);
	else{
		node *ptr=start,*prev=start;
		while(ptr->link!=start && ptr->data!=val){
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=new_node;
		new_node->link=ptr;
	}
	return start;
}
node* insertAfterGivenNode(node *start,node *new_node){
	printf("ENter the value of reference node:");
	int val;
	scanf("%d",&val);
	if(start->data==val){
		new_node->link=start->link;
		start->link=new_node;
	}
	else{
		node *ptr=start,*prev=start;
		while(prev->link!=start && prev->data!=val){
			prev=ptr;
			ptr=ptr->link;
		}
		prev->link=new_node;
		new_node->link=ptr;
	}
	return start;
}
void main(){
	node* start=createCircularLL();
	printf("DO you want to insert a new node into the circular linked list(1-for yes\t 0- for no):");
	int ch1,ch2,ch3,val;
	scanf("%d",&ch1);
	if(ch1==1){
		node* new_node=(node*)malloc(sizeof(node));
		printf("Enter the data for the new node:");
		scanf("%d",&val);
		new_node->data=val;
		printf("where do you want to insert\n1-to insert At begining\n2-to insert at end\n3-to insert before given node\n4-to insert after given node\nother- to quit the operation\nEnter your choice:");
		scanf("%d",&ch2);
		switch(ch2){
			case 1:start=insertAtBegining(start,new_node);break;
			case 2:start=insertAtEnd(start,new_node);break;
			case 3:start=insertBeforeGivenNode(start,new_node);break;
			case 4:start=insertAfterGivenNode(start,new_node);break;
			default:printf("Closing the insertion operation\n");
		}
	}
	printCircularLL(start);
}
