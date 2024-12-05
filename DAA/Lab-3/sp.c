#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int v,w;
	struct node*link;
}node;
int cost(int v1,int v2,node** graph){
	node* ptr=graph[v1-1];
	while(ptr!=NULL){
		if(ptr->v==v2) return ptr->w;
		ptr=ptr->link;
	}
	return 50000;
}
int isPresent(int *A,int n,int k){
	for(int i=0;i<n;i++){
		if(A[i]==k) return 1;
	}
	return 0;
}
void createGraph(node** graph,int v){
	int k=0;
	for(int i=0;i<v;i++){
		int n;
		printf("How many vertices that vertex %d incident with:",i+1);
		scanf("%d",&n);
		graph[k]=NULL;
		int j=0;
		node*parent=NULL;
		for(;j<n;j++){
			int n1,n2;
			printf("Enter the vertex that %d incident with and its weight:",i+1);
			scanf("%d %d",&n1,&n2);
			node *nd=(node*)malloc(sizeof(node));
			nd->v=n1;
			nd->w=n2;
			nd->link=NULL;
			if(parent==NULL){
				graph[k++]=nd;
				parent=nd;
			}
			else{
				parent->link=nd;
				parent=nd;
			}
		}
	}
}
void main(){
	int v;
	printf("Enter the no.of vertices:");
	scanf("%d",&v);
	node* graph[v];
	createGraph(graph,v);
	int S[v],t=0;
	S[t++]=1;
	int d[v];
	d[0]=0;
	for(int i=1;i<v;i++){
		d[i]=cost(1,i+1,graph);
		//printf("%d\n",d[i]);
	}
	for(int i=0;i<v;i++){
		int min;
		for(int j=1;j<v;j++){
			if(isPresent(S,t,j+1)==0){ min=j;break;}//getting a vertex which is not already in final set.
		}
		for(int j=1;j<v;j++){
			if(isPresent(S,t,j+1)==0 && d[j]<d[min]) min=j; 
		}
		S[t++]=min+1;
		for(int j=1;j<v;j++){
			int new=d[min]+cost(min+1,j+1,graph);
			if(new < d[j]) d[j]=new;
		}
	}
	printf("The path is represented for each node as 'vertex(distance from source)'");
	printf("Shortest Path is { ");
	for(int i=0;i<v;i++){
		printf("%d(%d),",S[i],d[S[i]-1]);
	}
	printf("\b }\n");
}
