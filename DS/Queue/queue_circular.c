#include <stdio.h>
#include <stdlib.h>
int size=4,Q[4],f=-1,r=-1;
void CQinsertion(int ele){
	if((f==0 && r==size-1)||(r+1==f)){
		printf("overflown\n");
		return;
	}
	if(r==size-1)
		r=0;
	else
		r=r+1;
	Q[r]=ele;
	if(f==-1) f=r=0;
}
int CQdeletion(){
	if(f==-1){
		printf("Underflown");
		exit(1);
	}
	int ele=Q[f];
	if(f==r){
		f=-1;
		r=-1;
	}
	else if(f==size-1){
		f=0;
	}
	else
		f=f+1;
	return ele;
}
void main(){
	printf("Now we are creating a Queue memory\n");
	int ch;
	printf("ENter\n1-to insert an element into stack\n2-to perform pop operation\n3-to exit out\nEnter your choice:");
	scanf("%d",&ch);
	do{
		switch(ch){
			int val;
			case 1:{
				printf("Enter a data to insert into Queue\n");
				scanf("%d",&val);
				CQinsertion(val);
			}break;
			case 2:{
				val=CQdeletion();
				printf("%d is deleted form the Queue\n",val);
			}break;
			case 3:{
				if(f<=r){
					for(int i=f;i<=r;i++)
						printf("%d\n",Q[i]);
				}
				else
					for(int i=r+1;i<size;i++)
						printf("%d\n",Q[i]);
					for(int i=0;i<=r;i++)
						printf("%d\n",Q[i]);
					
			}break;
			default:printf("wrong input\n");
		}
		printf("ENter\n1-to insert an element into stack\n2-to perform pop operation\n3-to exit out\nEnter your choice:");
		scanf("%d",&ch);
	}while(ch>=1 && ch<=3);
}
