#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void main(){
	//quadratic probing
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
		printf("Do you want to insert another element into the table(1-for yes,other for no):");
		scanf("%d",&ch);
	}while(ch==1);
	for(int i=0;i<n;i++)
		printf("%d\n",hash[i]);
}
