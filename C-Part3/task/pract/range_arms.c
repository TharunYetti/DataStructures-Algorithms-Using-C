#include <stdio.h>
#include <math.h>
void main(){
	int inp,temp,temp2,r,i;
	printf("ENter a numbeer to find armstromg numbers upto that number:");
	scanf("%d",&inp);
	for(i=1;i<=inp;i++){
		temp=i;
		temp2=i;
		int sum=0,c=0;
		while(temp!=0){
			c=c+1;
			temp/=10;
		}
		while(temp2!=0){
			r=temp2%10;
			sum=sum+pow(r,c);
			temp2/=10;
		}
		if(sum==i){
			printf("%d ",i);
		}
	}
}
