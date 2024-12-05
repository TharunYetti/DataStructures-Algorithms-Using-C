#include <stdio.h>
void main(){
	int num=145,sum=0,r,temp;
	temp=num;
	while(num!=0){
		int fact=1;
		r=num%10;
		for(int i=1;i<=r;i++){
			fact=fact*i;
		}
		printf("%d\n",fact);
		sum=sum+fact;
		num/=10;
	}
	if(temp==sum){
		printf("STRONG\n");
	}
	else{
		printf("WEAK\n");
	}
}
