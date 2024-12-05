#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int c[10]={4,8,2,5,9,1,3,7,6,11},counter=0;
typedef struct node{
	int data;
	struct node* link;
}node;
void main(){
	int ch;
	printf("\n1-Closed Hashing\n2-Open Hashing\nEnter:");
	scanf("%d",&ch);
	if(ch==1){
		int qi=1;
		int key,hash[10],n=10,ele,ch;
		for(int i=0;i<10;i++) hash[i]=-1;
		printf("\n1-Linear Probing\n2-Quadratic Probing\n3-Random Probing\n4-Double Hashing\nENter your choice:");
		scanf("%d",&ch);
		do{
			printf("Enter the element to be inserted into the hash table:");
			scanf("%d",&ele);
			switch(ch){
				case 1:{
					int key=(ele%10)-1;
					if(hash[key]==-1){
						hash[key]=ele;
					}
					else{
						int flag=0;
						for(int i=key+1;i<10;i++){
							if(hash[i]==-1){
								hash[i]=ele;
								flag=1;
								break;
							}
						}
						if(flag!=1){
							for(int i=0;i<key;i++){
								if(hash[i]==-1){
									hash[i]=ele;
									break;
								}
							}
						}
					}
				}break;
				case 2:{
					int key=(ele%10)-1;
					if(hash[key]==-1){
						hash[key]=ele;
					}
					else{
						int t_key,flag=0;
						do{
							t_key=key+(int)pow(qi++,2);
							int t2_key=t_key%10;
							if(hash[t2_key]==-1){
								hash[t2_key]=ele;
								flag=1;
							}
						}while(flag!=1);
					}
				}break;
				case 3:{
					int key=(ele%10)-1;
					if(hash[key]==-1){
						hash[key]=ele;
					}
					else{
						int flag=0,t_key,t2_key;
						do{
							if(counter==10) break;
							t_key=(key+c[counter++])%10;
							t2_key=(t_key%10);
							if(hash[t2_key]==-1){
								hash[t2_key]=ele;
								flag=1;
							}
						}while(flag==0);
						if(flag==0){
							printf("Ranodm probing was unsuccessful for this element with the respective size\n");
						}
					}
				}break;
				case 4:{
					int key=(ele%10)-1;
					if(hash[key]==-1){
						hash[key]=ele;
					}
					else{
						int flag=0;
						do{
							if(counter==10) break;
							int key2=ele%(c[counter++]-2)+1;
							if(hash[key2]==-1){
								hash[key2]=ele;
								flag=1;
							}
						}while(flag==0);
						if(flag==0){
							printf("ReHashing probing was unsuccessful for this element with the respective size\n");
						}
					}
				}break;
				default:printf("Wrong input\n");
			}
			printf("DO you want to contnue inseting(1-for yes,otehr for no):");
			scanf("%d",&ch);
		}while(ch==1);
	}
	else if(ch==2){
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
	
}
