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
node* temp_parent=NULL;
node* create(){
	int data;
	node* nd=(node*)malloc(sizeof(node));
	printf("ENter the data of the node(-1 to exit):");
	scanf("%d",&data);
	if(data==-1) return NULL;
	nd->data=data;
	nd->parent=temp_parent;
	temp_parent=nd;
	printf("Enter left child details\n");
	nd->left=create();
	printf("ENter right child details\n");
	nd->right=create();
	return nd;
}
void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
}
void preorder(node* root){
	if(root!=NULL){
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\n",root->data);
	}
}
void main(){
	int data,ch=0;
	node*root=NULL;
	root=create();
	inorder(root);//segmentation fault
}
