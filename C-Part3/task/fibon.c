/*
#include <stdio.h>
void main(){
	int k,c,a=0,b=1;
	printf("Enter how many terms do you want:");
	scanf("%d",&k);
	printf("%d\n%d\n",a,b);
	for(int i=3;i<=k;i++){
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
*/
#include <stdio.h>
#include <math.h>
void main(){
	int c=0,r=0,d,num=234,temp;
	temp=num;
	while(temp!=0){
		c=c+1;
		temp=temp/10;
	}
	printf("%d\n",c);
	while(c!=0){
		d=num%10;
		r+=d*pow(10,c-1);
		num=num/10;
		c--;
	}
	printf("%d\n",r);
}
