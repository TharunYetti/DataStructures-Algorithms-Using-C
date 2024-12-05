//palindrome in linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node*link;
}node;
node* createLinkedList(){
	node *h_ptr,*temp_link=NULL;
	printf("Enter how many nodes do you want to create:");
	int num;
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		node* new_node=(node*)malloc(sizeof(node));
		if(temp_link!=NULL)
			temp_link->link=new_node;
		else
			h_ptr=new_node;
		printf("Enter data:");
		scanf("%d",&(new_node->data));
		new_node->link=NULL;
		temp_link=new_node;
	}
	return h_ptr;
}
void main(){
	node* fll=createLinkedList(),*sll;
	int count=0,flag=0;
	node* temp=fll,*t_node=NULL,*prev=NULL,*after;
	while(temp!=NULL){
		node* nd=(node*)malloc(sizeof(node));
		nd->data=temp->data;
		nd->link=NULL;
		if(prev!=NULL) prev->link=nd;
		else sll=nd;
		prev=nd;
		temp=temp->link;
		count++;
	}
	//printf("count-->%d\n",count);
	temp=sll;
	while(temp!=NULL){
		after=temp->link;
		temp->link=t_node;
		t_node=temp;
		temp=after;
	}
	sll=t_node;
	node* t1=fll,*t2=sll;
	while(t1!=NULL && t2!=NULL){
		if(t1->data==t2->data)
			flag++;
		t1=t1->link;
		t2=t2->link;
	}
	//printf("count-->%d\n",flag);
	if(flag==count)	printf("Plaindrome\n");
	else printf("Not a Palindrome\n");
}
