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
	node* start=createCircularLL();
	printCircularLL(start);
}
