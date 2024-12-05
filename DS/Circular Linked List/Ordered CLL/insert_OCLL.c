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
void main(){
	int val;
	node* start=createCircularLL(),*nd;
	printf("ENter a data of the node to insert into the OCLL:");
	scanf("%d",&val);
	nd=(node*)malloc(sizeof(node));
	nd->data=val;
	nd->link=NULL;
	node* ptr=start,*prev;
	if(ptr->data>val){
		nd->link=start;
		while(ptr->link!=start)
			ptr=ptr->link;
		ptr->link=nd;
		start=nd;
	}
	else{
		//errrror insertion at last is not doing
		while(ptr->link!=start && ptr->data<val){
			prev=ptr;
			ptr=ptr->link;
		}
		if(ptr->data<val){
			nd->link=ptr->link;
			ptr->link=nd;	
		}
		else{
			prev->link=nd;
			nd->link=ptr;
		}
	}
	printCircularLL(start);
	printf("ENter a data of the node to delete from the OCLL:");
	scanf("%d",&val);
	ptr=start;
	if(ptr->data==val){
		node* tmp=start;
		tmp=tmp->link;
		while(ptr->link!=start)
			ptr=ptr->link;
		ptr->link=tmp;
		free(start);
		start=tmp;
	}
	else{
		while(ptr->link!=start && ptr->data<val){
			prev=ptr;
			ptr=ptr->link;
		}
		if(ptr->data!=val || ptr==start){
			printf("no node found\n");
			exit(1);
		}
		prev->link=ptr->link;
		free(ptr);
	}
	printCircularLL(start);
}
