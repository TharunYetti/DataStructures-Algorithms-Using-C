#include <stdio.h>
int num;
void main(){
	printf("Enter a number:");
	scanf("%d",&num);
	int d,sum;
	while(num>0){
		d=num%10;
		sum=sum+d;
		num=num/10;	
	}
	printf("The sum of digits is %d\n",sum);
}
