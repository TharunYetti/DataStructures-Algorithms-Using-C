#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int c[10]={4,8,2,5,9,1,3,7,6,11},counter=0;
void main(){
	//random probing
	int qi=1;
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
		printf("Do you want to insert another element into the table(1-for yes,other for no):");
		scanf("%d",&ch);
	}while(ch==1);
	for(int i=0;i<n;i++)
		printf("%d\n",hash[i]);
}
