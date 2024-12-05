#include <stdio.h>
#include <stdlib.h>
void main(){
	//linear probing
	int key,hash[10],n=10,ele,ch;
	for(int i=0;i<10;i++)
		hash[i]=-1;
	do{
		printf("Enter the number to insert in the hash table:");
		scanf("%d",&ele);
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
		printf("Do you want to insert another element into the table(1-for yes,other for no):");
		scanf("%d",&ch);
	}while(ch==1);
	for(int i=0;i<n;i++)
		printf("%d\n",hash[i]);
}
