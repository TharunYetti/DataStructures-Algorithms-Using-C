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
	return 99999;
}
//no need to write this,just write the declaration part like 'void createGraph(node**graph,int v);'
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
	int v,e;
	printf("Enter the no.of vertices and edges that the graph contain:");
	scanf("%d %d",&v,&e);
	node *graph[v];
	createGraph(graph,v);
	printf("Graph created\n");
	int t[e][2],near[v];
	int mincost=99999;
	//getting mincost edge
	for(int i=0;i<v;i++){
		node* ptr=graph[i];
		while(ptr!=NULL){
			if((ptr->w)<mincost){
				mincost=ptr->w;
				t[0][0]=i+1;t[0][1]=ptr->v;
			}
			ptr=ptr->link;
		}
	}
	for(int i=0;i<v;i++){
		if(cost(i+1,t[0][1],graph)<cost(i+1,t[0][0],graph)) near[i]=t[0][1];
		else near[i]=t[0][0];
	}
	near[t[0][0]-1]=near[t[0][1]-1]=0;
	
	for(int i=1;i<v-1;i++){
		int c=99999,j=0;
		while(j<v){
			if(near[j]!=0 && cost(j+1,near[j],graph)<c){
				t[i][0]=j+1;
				t[i][1]=near[j];
				c=cost(j+1,near[j],graph);
			}
			j++;
		}
		j=t[i][0]-1;
		mincost+=c;
		near[j]=0;
		for(int k=0;k<v;k++){
			if(near[k]!=0 && cost(k+1,near[k],graph)>cost(k+1,j+1,graph)) near[k]=j+1;
		}
	}
	for(int i=0;i<e;i++){
		if(t[i][0]>v||t[i][1]>v) break;
		printf("(%d-%d),",t[i][0],t[i][1]);
	}
	printf("\b \nmincost-%d\n",mincost);
}
