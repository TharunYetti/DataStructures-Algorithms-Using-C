//sorting the likned list in ascnding order upto half and descending order for remaining
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
		temp=temp->link;i++;
	}
}
node* createLinkedList(){
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
		n_node->link=NULL;
		temp_link=n_node;
		if(i==1)
			h_ptr=n_node;
	}
	return h_ptr;
}
void main(){
	node* h_ptr;
	h_ptr=createLinkedList();
	int count=0;
	node* t_ptr=h_ptr;
	while(t_ptr!=NULL){
		count++;
		t_ptr=t_ptr->link;
	}
	//printf("%d\n",count);
	int temp,i=1,j=1;
	node *ptr1=h_ptr,*ptr2=NULL;
	while(ptr1->link!=NULL && i<=(count/2)){
		ptr2=ptr1->link;
		int k=1+i;
		while(ptr2!=NULL && k<=(count/2)){
			if( (ptr1->data)>(ptr2->data) ){
				temp=ptr1->data;
				ptr1->data=ptr2->data;
				ptr2->data=temp;
			}
			ptr2=ptr2->link;
			k++;
		}
		ptr1=ptr1->link;
		i++;
	}
	ptr1=h_ptr;ptr2=NULL;
	while(ptr1->link!=NULL){
		if(j>=(count/2+1)){
			ptr2=ptr1->link;
			while(ptr2!=NULL){
				if( (ptr1->data)<(ptr2->data) ){
					temp=ptr1->data;
					ptr1->data=ptr2->data;
					ptr2->data=temp;
				}
				ptr2=ptr2->link;
			}
		}
		ptr1=ptr1->link;
		j++;
	}
	printLinkedList(h_ptr);
}
