#include <stdio.h>
#include <math.h>
void main(){
	int num=371,c=0,sum=0,temp,r;
	temp=num;
	while(temp!=0){
		c=c+1;
		temp/=10;
	}
	printf("%d\n",c);
	while(num!=0){
		r=num%10;
		sum=sum+pow(r,c);
		num/=10;
	}
	printf("%d\n",sum);
}
