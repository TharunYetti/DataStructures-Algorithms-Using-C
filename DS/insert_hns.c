//insertion before key and after key
#include <stdlib.h>
#include <stdio.h>
typedef struct name{
	int data;
	struct name*link;
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
void main(){
	printf("Enter how many nodes do you want to create:");
	int num,data;
	scanf("%d",&num);
	node *h_ptr=NULL,*n_node,*temp_link=NULL;
	for(int i=1;i<=num;i++){
		n_node=(node*)malloc(sizeof(node));
		if(temp_link!=NULL)
			temp_link->link=n_node;
		printf("Enter data:");
		scanf("%d",&data);
		n_node->data=data;
		//n_node->link=NULL;
		temp_link=n_node;
		if(i==num)
			n_node->link=NULL;
		if(i==1)
			h_ptr=n_node;
	}
	//printLinkedList(h_ptr);
	int ch,key,isfound;
	printf("Enter\n1- to insert the new node before the node containg the key\n2- to insert the new node after the node containg the key\nENter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:{
			printf("Enter the key of the reference node:");
			scanf("%d",&key);
			node *tmp=h_ptr,*ref_node=NULL;
			isfound=0;
			while(h_ptr!=0){
				if(key==(h_ptr->data)){
					ref_node=h_ptr;
					isfound=1;
					break;
				}
				h_ptr=h_ptr->link;
			}
			h_ptr=tmp;
			if(isfound==0){
				printf("The key is not in the list\n");
				break;
			}
			printf("refrenece node=%d\n",ref_node);
			if(ref_node!=NULL){
				node *new_node=(node*)malloc(sizeof(node));
				new_node->data=1234;
				new_node->link=NULL;
				if(ref_node!=h_ptr){
					node *bef_node;
					while(h_ptr!=NULL){
						if(h_ptr!=ref_node)
							bef_node=h_ptr;
						else
							break;
						h_ptr=h_ptr->link;
					}
					bef_node->link=new_node;
					new_node->link=ref_node;
					h_ptr=tmp;
				}
				else{
					new_node->link=h_ptr;
					h_ptr=new_node;
				}
					
			}
			else
				printf("Tharun Yetti\n");
			printLinkedList(h_ptr);
			break;
		}
		case 2:{
			printf("Enter the key of the reference node:");
			scanf("%d",&key);
			node *tmp=h_ptr,*ref_node=NULL;
			isfound=0;
			while(h_ptr!=0){
				if(key==(h_ptr->data)){
					ref_node=h_ptr;
					isfound=1;
					break;
				}
				h_ptr=h_ptr->link;
			}
			if(isfound==0){
				printf("The key is not in the list\n");
				break;
			}
			h_ptr=tmp;
			printf("refrenece node=%d\n",ref_node);
			if(ref_node!=NULL){
				node *new_node=(node*)malloc(sizeof(node));
				node *aft_node;
				new_node->data=1234;
				new_node->link=NULL;
				new_node->link=ref_node->link;
				ref_node->link=new_node;
			}
			else
				printf("Tharun Yetti\n");
			printLinkedList(h_ptr);
			break;
		}
		default:printf("Good bye mowa!");
	}
}

