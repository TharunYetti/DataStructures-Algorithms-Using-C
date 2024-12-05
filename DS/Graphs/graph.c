//graph implementation with adjacency list
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int edge;
	struct node*link;
}node;
typedef struct graph{
	int vertex;
	struct node*A;
	struct graph*next;
}graph;
void main(){
	int v,inc;
	printf("Enter the no.of vertices does the graph have:");
	scanf("%d",&v);
	printf("label those vertices with numbers or alphabets..let they will be alphabets like 1,2,3,etc\n");
	graph*head=NULL;
	graph*tempg=NULL;
	for(int i=1;i<=v;i++){
		graph *demog=(graph*)malloc(sizeof(graph));
		if(head==NULL) head=demog;
		else tempg->next=demog;
		demog->vertex=i;
		demog->A=NULL;
		node* temp=NULL;
		for(int j=1;j<=v;j++){
			if(j!=i){
				printf("Is the node %d incident with node %d(1-yes,0-no):",i,j);
				scanf("%d",&inc);
				if(inc==1){
					node* nd=(node*)malloc(sizeof(node));
					if(temp) temp->link=nd;
					else demog->A=nd;
					nd->edge=j;
					nd->link=NULL;
					temp=nd;
				}
			}
		}
		demog->next=NULL;
		tempg=demog;
	}
	printf("The adjacency list of the given graph is as follows\n");
	graph *current=head;
	while(current!=NULL){
		printf("%d:",current->vertex);
		node*ptr=current->A;
		while(ptr!=NULL){
			printf("%d ",ptr->edge);
			ptr=ptr->link;
		}
		current=current->next;
		printf("\n");
	}
}
