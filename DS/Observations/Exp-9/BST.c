//BST
#include <stdlib.h>
#include <stdio.h>
typedef struct BSTNode{
	int data;
	struct BSTNode*left,*right;
}node;
node* insert(node* root,int data){
	if(root==NULL){
		root=(node*)malloc(sizeof(node));
		root->data=data;
		root->left=root->right=NULL;
		return root;
	}
	else if(data<=root->data){
		root->left=insert(root->left,data);
	}
	else{
		root->right=insert(root->right,data);
	}
	return root;
}
int found=0;
node* search(node *root,int val){
	if(root->data==val){
		return root;
	}
	else if(val<root->data){
		if(!root->left) return NULL;
		return search(root->left,val);
	}
	else{
		if(!root->right) return NULL;
		return search(root->right,val);
	}
}
node* delete(node* root,int val){
	if(root==NULL) return NULL;
	if(val < root->data){
		root->left=delete(root->left,val);
		return root;
	}
	else if(val > root->data){
		root->right=delete(root->right,val);
		return root;
	}
	if(!root->left){
		node* temp=root->right;
		free(root);
		return temp;
	}
	else if(!root->right){
		node* temp=root->left;
		free(root);
		return temp;
	}
	else{
		node* sp=root,*s=root->right;
		while(s->left!=NULL){
			sp=s;
			s=s->left;
		}
		if(sp!=root){
			sp->left=s->right;
		}
		else{
			sp->right=s->right;
		}
		root->data=s->data;
		free(s);
		return root;
	}
}
void inorder(node*root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
}
void main(){
	int val,ch;
	node *root=NULL;
	do{
		printf("Enter the data:");
		scanf("%d",&val);
		root=insert(root,val);
		printf("DO you want to enter another node(1-yes,0-no):");
		scanf("%d",&ch);
	}while(ch==1);
	/*
	printf("created\n");
	inorder(root);
	do{
		printf("Enter the value of the node to be dleeted:");
		scanf("%d",&val);
		root=delete(root,val);
		printf("Deleted\n");
		inorder(root);
		printf("DO  you want to delete another node:");
		scanf("%d",&ch);
	}while(ch==1);
	*/
	printf("Enter value to search:");
	scanf("%d",&val);
	node* searchValue=search(root,val);
	if(searchValue!=NULL){
		printf("FOund the node:%d\n",searchValue->data);
	}
	else{
		printf("Not foudn\n");
	}
	printf("Enter node data to delete:");
	scanf("%d",&val);
	node* del=delete(root,val);
	if(del!=NULL){
		printf("Deleted the node\n");
	}
	else{
		printf("Node not found with that data\n");
	}
	inorder(root);
}
