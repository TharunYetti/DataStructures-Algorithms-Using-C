#include <stdio.h>
#include <stdlib.h>
int reverseNumber(int n){
	int temp=n,sum=0,dig;
	while(temp!=0){
		dig=temp%10;
		sum=sum*10+dig;
		temp/=10;
	}
	return sum;
}
int countOfNum(int num){
	int temp=num,count=0;
	while(temp!=0){
		count++;
		temp=temp/10;
	}
	return count;
}
void main(){
	int ele,hashVal,ch,n;
	printf("1-Division Method\n2-Multiplication Method\n3-Mid-Square Method\n4-Truncation Method\n5-Folding Method\nENter your choice:");
	scanf("%d",&ch);
	printf("Enter the element:");
	scanf("%d",&ele);
	switch(ch){
		case 1:{
			//division method without collisions
			printf("Enter the size of the hashTable:");
			scanf("%d",&n);
			hashVal=ele%n;
		}break;
		case 2:{
			//multiplication method
			printf("Enter the size of the hashTable:");
			scanf("%d",&n);
			float a=0.5,key=ele*a;
			int tmp=(int)key;
			float fval=key-tmp;
			fval=fval*n;
			hashVal=(int)fval;
		}break;
		case 3:{
			//mid-square method
			int sq=ele*ele,count=countOfNum(sq);
			if(count<=3) hashVal=sq;
			else{
				char str[count+1],new_str[3];
				sprintf(str,"%d",sq);//interger to string conversion
				int j=0,mid=count/2,k=0;
				while(str[j]!=0){
					if(j==mid||j==mid-1||j==mid+1) new_str[k++]=str[j];
					j++;
				}
				hashVal=atoi(new_str);//string to integer conversion
			}
		}break;
		case 4:{
			//truncation method
			int count=countOfNum(ele);
			if(count>3){
				int temp=ele,dig,count=0,rev=0;
				while(temp!=0 && count<3){
					dig=temp%10;
					rev=rev*10+dig;
					temp/=10;
					count++;
				}
				printf("Vlaue----%d\n",reverseNumber(rev));
				hashVal=reverseNumber(rev);
			}
			else hashVal=ele;
		}break;
		case 5:{
			int count=countOfNum(ele);
			if(count>3){
				int temp=ele,temp2=reverseNumber(ele),len=0,rev=0,dig;
				while(temp!=0 && len<3){
					dig=temp%10;
					rev=rev*10+dig;
					temp/=10;
					len++;
				}
				hashVal=reverseNumber(rev),rev=0,len=0;
				while(temp2!=0 && len<3){
					dig=temp2%10;
					rev=rev*10+dig;
					temp2/=10;
					len++;
				}
				hashVal+=rev;
			}		
			else hashVal=ele;
		}break;
	}
	printf("Element inserted into hash table with the hash value of %d!\n",hashVal);
}
