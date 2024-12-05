// __-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__HASHING METHODS__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__
#include <stdio.h>
#include <stdlib.h>
int reverseNumber(int n){
	int temp=n,sum=0,dig;
	while(temp!=0){
		dig=temp%10;
		sum+=dig*10;
		temp/=10;
	}
	return sum;
}
void main(){
	int n,ele;
	printf("Enter the number of elements you enter(Enter in powers of 10 for folding method):");
	scanf("%d",&n);
	int hash[n];
	/*
	for(int i=0;i<n;i++) hash[i]=NULL;
	
	//division method without collisions
	
	for(int i=0;i<n;i++){
		printf("Enter the element:");
		scanf("%d",&ele);
		hash[ele%n]=ele;
		printf("Element inserted into hash table!\n");
	}
	//Floding method without collisions
	
	//--->Fold shift method
	//doubt in some testcases
	for(int i=0;i<n;i++){
		printf("Enter the element:");
		scanf("%d",&ele);
		if(ele>n){
			int temp=n,dig,sum=0,count=0;
			while(temp!=0){
				count++;
				temp/=10;
			}
			int temp2,num=0,numlen=0;
			temp2=reverseNumber(ele);
			while(temp2!=0){
				dig=temp2%10;
				if(count==2){
					sum=sum+dig;
					temp2/=10;
					continue;
				}
				num=num+(dig*10);
				if(numlen<count-1) numlen++;
				else if(numlen>=count-1 || temp2/10==0){
					sum+=num;
					numlen=0;
					num=0;
				}
				temp2/=10;
			}
			hash[sum]=ele;
		}
		else hash[ele]=ele;
		
	}
	
	//--->Fold Boundary method
	//doubt in some testcases
	
	for(int i=0;i<n;i++){
		printf("Enter the element:");
		scanf("%d",&ele);
		if(ele>=n){
			int len=n/10,dig,bound=0,sum=0,temp1=reverseNumber(ele),count=0;
			while(temp1!=0 && count<=len){
				dig=temp1%10;
				bound+=dig*10;
				count++;
			}
			sum+=bound;
			int temp2=ele;
			count=0;
			bound=0;
			while(temp2!=0 && count<=len){
				dig=temp2%10;
				bound+=dig*10;
				count++;
			}
			sum+=reverseNumber(bound);
		}
		else hash[ele]=ele;
	}
	*/
	//mid-square method
	for(int i=0;i<n;i++){
		printf("Enter the elemnt:");
		scanf("%d",&ele);
		int sq=ele*ele;
		int temp=sq,count=0;
		while(temp!=0){
			count++;
			temp=temp/10;
		}
		if(count<=3) hash[sq]=ele;
		else{
			char str[count+1],new_str[3];
			sprintf(str,"%d",sq);
			int j=0,mid=count/2,k=0;
			while(str[j]!=0){
				if(j==mid||j==mid-1||j==mid+1){
					new_str[k++]=str[j];
				}
				j++;
			}
			hash[atoi(new_str)]=ele;
			//printf("%s\n",new_str);
			//printf("%d\n",atoi(new_str));
		}
	}
	/*
	//truncation method
	for(int i=0;i<n;i++){
		printf("Enter the element:");
		scanf("%d",&ele);
		int len=n/10;
		if(ele>=n){
			int temp1=ele,count=0,dig,trun=0;
			while(temp1!=0 && count<=len){
				dig=temp1%10;
				trun+=dig*10;
				count++;
			}
			int sum=reverseNumber(trun);
			hash[sum]=ele;
		}
		else hash[ele]=ele;
	}
	*/
	//printing the hash table
	for(int i=0;i<n;i++) printf("%d\n",hash[i]);
}
