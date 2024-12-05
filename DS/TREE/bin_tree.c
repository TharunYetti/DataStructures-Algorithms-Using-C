#include <math.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *left;
	struct node *right;
	struct node *parent;
}node;
node* newnode(int data,node* r_node){
	node* nd=(node*)malloc(sizeof(node));
	nd->data=data;
	nd->left=nd->right=NULL;
	nd->parent=r_node;
	return nd;
}
//node* root=NULL;
node* create(int data,node* root,node* parent){
	if(root==NULL){
		root=(node*)malloc(sizeof(node));
		root->data=data;
		root->left=root->right=NULL;
		root->parent=parent;
		return root;
	}
	if(data<=root->data){
		root->left=create(data,root->left,root);
	}
	else{
		root->right=create(data,root->right,root);
	}
	return root;
	
}
void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
}
void main(){
	int data,ch=0;
	node*root=NULL,*temp=NULL;
	do{
		printf("ENter the data:");
		scanf("%d",&data);
		root=create(data,root,root);
		printf("Do you want to create subtree(1-yes,0-no):");
		scanf("%d",&ch);
	}while(ch==1);
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	inorder(root);//segmentation fault
}
