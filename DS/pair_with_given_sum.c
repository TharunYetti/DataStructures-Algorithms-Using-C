#include <stdio.h>
#include <stdlib.h>
typedef struct name{
	int data;
	struct name*link;
}node;
node* createLinkedList(){
	node* h_ptr,*temp_link=NULL;
	printf("Enter how many node do you want to create:");
	int num;
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		node* new_node=(node*)malloc(sizeof(node));
		if(temp_link!=NULL)
			temp_link->link=new_node;
		if(i==1)
			h_ptr=new_node;
		printf("ENter data:");
		scanf("%d",&(new_node->data));
		new_node->link=NULL;
		temp_link=new_node;
	}
	return h_ptr;
}
void main(){
	//find the pair in the SLL with the given sum
	int sum,isPresent=0;
	node* h_ptr=createLinkedList();
	/*
	printf("Enter the sum you want to find:");
	scanf("%d",&sum);
	node *ptr1=h_ptr,*ptr2=h_ptr;
	while(ptr1->link!=NULL){
		ptr2=ptr1->link;
		while(ptr2->link!=NULL){
			if( (ptr1->data)+(ptr2->data)==sum ){
				printf("The pair equal to given sum are %d and %d\n",ptr1->data,ptr2->data);
				isPresent=1;
			}
			ptr2=ptr2->link;
		}
		ptr1=ptr1->link;
	}
	if(isPresent==0)
		printf("NO match found\n");
	//maximum product of data in SLL
	ptr1=h_ptr;ptr2=h_ptr;
	int prod=1,temp_prod;
	while(ptr1->link!=NULL){
		ptr2=ptr1->link;
		while(ptr2->link!=NULL){
			temp_prod=(ptr1->data)*(ptr2->data);
			if(temp_prod>prod)
				prod=temp_prod;	
			ptr2=ptr2->link;
		}
		ptr1=ptr1->link;	
	}
	printf("The maximum product in the list is %d\n",prod);
	*/
	
	//reversing the data in SLL
	int count=0,i=1,j=1;
	node *ptr1=h_ptr,*ptr2=h_ptr,*temp_head=h_ptr;
	while(temp_head!=NULL){
		count++;
		temp_head=temp_head->link;
	}
	printf("%d\n",count);
	ptr1=h_ptr;ptr2=h_ptr;
	while(ptr1->link!=NULL && i<=count/2){
		ptr2=ptr1;
		while(ptr2->link!=NULL && j<=(count+1-(2*i))){
			ptr2=ptr2->link;
			j++;
		}
		int temp=ptr1->data;
		ptr1->data=ptr2->data;
		ptr2->data=temp;
		ptr1=ptr1->link;
		i++;
	}
	int k=1;
	while(h_ptr!=NULL){
		printf("Data-%d:%d\n",k,h_ptr->data);
		h_ptr=h_ptr->link;k++;
	}
}
