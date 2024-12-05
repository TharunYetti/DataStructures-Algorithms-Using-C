#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node*link;
}node;
node* createLinkedList(int n){
	node *h_ptr,*temp=NULL;
	for(int i=1;i<=n;i++){
		node* nd=(node*)malloc(sizeof(node));
		if(temp==NULL){
			h_ptr=nd;
		}
		else{
			temp->link=nd;
		}
		printf("Enter the data %d:",i);
		scanf("%d",&(nd->data));
		nd->link=NULL;
		temp=nd;
	}
	return h_ptr;
}
void main(){
	int n,ch;
	printf("Enter the order of the polynomials:");
	scanf("%d",&n);
	printf("Enter the coeffcients and constatnt in the order for first linked list\n");
	node *n1=createLinkedList(n);
	printf("Enter the coeffcients and constatnt in the order for second linked list\n");
	node *n2=createLinkedList(n);
	printf("ENter 1-for addition,2-for subraction:");
	scanf("%d",&ch);
	switch(ch){
		case 1:{
			node *t1=n1,*t2=n2,*temp=n1;
			while(t1!=NULL){
				t1->data+=t2->data;
				t1=t1->link;
				t2=t2->link;
			}
		}break;
		case 2:{
			node *t1=n1,*t2=n2,*temp=n1;
			while(t1!=NULL){
				t1->data-=t2->data;
				t1=t1->link;
				t2=t2->link;
			}
		}break;
		default:printf("Babye\n");
	}
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
