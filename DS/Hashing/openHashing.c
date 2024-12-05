#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node* link;
}node;
void main(){
	node *hash[10];
	int n=10,ele,key,ch;
	for(int i=0;i<10;i++) hash[i]=NULL;
	do{
		printf("Enter the element to insert into hash table:");
		scanf("%d",&ele);
		key=(ele%10)-1;
		node* nd=(node*)malloc(sizeof(node));
		nd->data=ele;
		nd->link=NULL;
		if(hash[key]==NULL){
			hash[key]=nd;
		}
		else{
			node* temp=hash[key];
			while(temp->link!=NULL) temp=temp->link;
			temp->link=nd;
		}
		printf("Do you want to insert another element into the table(1-for yes,other for no):");
		scanf("%d",&ch);
	}while(ch==1);
	for(int i=0;i<10;i++){
		if(!hash[i]) printf("NULL");
		node* temp=hash[i];
		while(temp!=NULL){
			printf("%d-",temp->data);
			temp=temp->link;
		}
		printf("\b \n");
	}
}

